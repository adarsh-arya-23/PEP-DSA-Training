/*
Understanding the tree concept:
*/

#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left=NULL;
        right = NULL;
    }
};

void inorder(Node* root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void preorder(Node* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(Node* root){
    if(root == NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

Node* createTree() {
    int val;
    cin >> val;
    if(val == -1){
        return NULL;
    }
    Node* root = new Node(val);
    root->left = createTree();
    root->right = createTree();
    return root;
}


int main(){
    
/*
    Node* root = new Node(10);  
    root-> left = new Node(20);  
    root-> right = new Node(30);  
    root->left->left = new Node(40);  
    root->left->right = new Node(50);
*/
    /*Recursive Way To Initialize Value*/

    cout << "Enter values (-1 for NULL): ";
    Node* root = createTree();

    inorder(root);
    cout<<endl;
    preorder(root);
    cout<<endl;
    postorder(root);
    cout<<endl;

}