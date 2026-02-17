#include <iostream>
#include <vector>
#include <algorithm>

struct Node {
    int data;
    Node *left, *right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

class BST {
    void storeInorder(Node* root, std::vector<int>& nodes) {
        if (!root) return;
        storeInorder(root->left, nodes);
        nodes.push_back(root->data);
        storeInorder(root->right, nodes);
    }

    Node* buildBalanced(const std::vector<int>& nodes, int start, int end) {
        if (start > end) return nullptr;
        int mid = start + (end - start) / 2;
        Node* root = new Node(nodes[mid]);
        root->left = buildBalanced(nodes, start, mid - 1);
        root->right = buildBalanced(nodes, mid + 1, end);
        return root;
    }

public:
    Node* balanceBST(Node* root) {
        std::vector<int> nodes;
        storeInorder(root, nodes);
        return buildBalanced(nodes, 0, nodes.size() - 1);
    }

    void printPreorder(Node* node) {
        if (!node) return;
        std::cout << node->data << " ";
        printPreorder(node->left);
        printPreorder(node->right);
    }
};

int main() {
    Node* root = new Node(10);
    root->left = new Node(8);
    root->left->left = new Node(7);
    root->left->left->left = new Node(6);
    root->left->left->left->left = new Node(5);

    BST bst;
    root = bst.balanceBST(root);

    bst.printPreorder(root);
    return 0;
}
