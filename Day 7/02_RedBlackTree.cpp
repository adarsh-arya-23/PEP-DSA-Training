/*

*****Manual Implimentation of Red Black Tree*****

-> Implemented logic from stratch.
-> Haven't used STL.
-> 


*/


#include<iostream>
using namespace std;

enum Color { RED, BLACK };

struct Node{
    int data;
    bool color;
    Node *left, *right, *parent;

    Node(int data){
        this->data = data;
        left = right = parent = nullptr;
        this->color = RED;
    }
};

class RedBlackTree{
private:
    Node *root;

protected:

    void rotateLeft(Node *&ptr){
        Node *right_child = ptr->right;
        ptr->right = right_child->left;

        if(ptr->right != nullptr)
            ptr->right->parent = ptr;

        right_child->parent = ptr->parent;

        if(ptr->parent == nullptr)
            root = right_child;
        else if(ptr == ptr->parent->left)
            ptr->parent->left = right_child;
        else
            ptr->parent->right = right_child;

        right_child->left = ptr;
        ptr->parent = right_child;
    }

    void rotateRight(Node *&ptr){
        Node *left_child = ptr->left;
        ptr->left = left_child->right;

        if(ptr->left != nullptr)
            ptr->left->parent = ptr;

        left_child->parent = ptr->parent;

        if(ptr->parent == nullptr)
            root = left_child;
        else if(ptr == ptr->parent->left)
            ptr->parent->left = left_child;
        else
            ptr->parent->right = left_child;

        left_child->right = ptr;
        ptr->parent = left_child;
    }

    void fixViolation(Node *&ptr){
        Node *parent_ptr = nullptr;
        Node *grand_parent_ptr = nullptr;

        while(ptr != root && ptr->parent->color == RED){
            parent_ptr = ptr->parent;
            grand_parent_ptr = parent_ptr->parent;

            // Parent is left child
            if(parent_ptr == grand_parent_ptr->left){
                Node *uncle_ptr = grand_parent_ptr->right;

                // Case 1: Uncle is RED
                if(uncle_ptr != nullptr && uncle_ptr->color == RED){
                    grand_parent_ptr->color = RED;
                    parent_ptr->color = BLACK;
                    uncle_ptr->color = BLACK;
                    ptr = grand_parent_ptr;
                }
                else{
                    // Case 2: ptr is right child
                    if(ptr == parent_ptr->right){
                        rotateLeft(parent_ptr);
                        ptr = parent_ptr;
                        parent_ptr = ptr->parent;
                    }

                    // Case 3: ptr is left child
                    rotateRight(grand_parent_ptr);
                    swap(parent_ptr->color, grand_parent_ptr->color);
                    ptr = parent_ptr;
                }
            }
            // Parent is right child (mirror cases)
            else{
                Node *uncle_ptr = grand_parent_ptr->left;

                // Case 1
                if(uncle_ptr != nullptr && uncle_ptr->color == RED){
                    grand_parent_ptr->color = RED;
                    parent_ptr->color = BLACK;
                    uncle_ptr->color = BLACK;
                    ptr = grand_parent_ptr;
                }
                else{
                    // Case 2
                    if(ptr == parent_ptr->left){
                        rotateRight(parent_ptr);
                        ptr = parent_ptr;
                        parent_ptr = ptr->parent;
                    }

                    // Case 3
                    rotateLeft(grand_parent_ptr);
                    swap(parent_ptr->color, grand_parent_ptr->color);
                    ptr = parent_ptr;
                }
            }
        }

        root->color = BLACK;
    }

public:

    RedBlackTree(){
        root = nullptr;
    }

    void insert(int data){
        Node *ptr = new Node(data);
        Node *parent = nullptr;
        Node *current = root;

        // BST insertion
        while(current != nullptr){
            parent = current;
            if(ptr->data < current->data)
                current = current->left;
            else
                current = current->right;
        }

        ptr->parent = parent;

        if(parent == nullptr)
            root = ptr;
        else if(ptr->data < parent->data)
            parent->left = ptr;
        else
            parent->right = ptr;

        fixViolation(ptr);
    }

    void inorder(Node *node){
        if(node == nullptr)
            return;

        inorder(node->left);
        cout << node->data << " (" 
             << (node->color == RED ? "R" : "B") << ") ";
        inorder(node->right);
    }

    void display(){
        inorder(root);
        cout << endl;
    }
};

int main(){
    RedBlackTree tree;

    tree.insert(10);
    tree.insert(20);
    tree.insert(30);
    tree.insert(15);
    tree.insert(25);

    tree.display();

    return 0;
}
