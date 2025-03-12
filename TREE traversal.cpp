#include <iostream>
using namespace std;

// Define a Node structure for the binary tree
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) {  // Constructor to initialize a node
        data = value;
        left = right = nullptr;
    }
};

// Inorder Traversal (Left, Root, Right)
void inorderTraversal(Node* root) {
    if (root == nullptr) return;

    inorderTraversal(root->left);   // Visit left subtree
    cout << root->data << " ";      // Print root node
    inorderTraversal(root->right);  // Visit right subtree
}

// Preorder Traversal (Root, Left, Right)
void preorderTraversal(Node* root) {
    if (root == nullptr) return;

    cout << root->data << " ";      // Print root node
    preorderTraversal(root->left);  // Visit left subtree
    preorderTraversal(root->right); // Visit right subtree
}

// Postorder Traversal (Left, Right, Root)
void postorderTraversal(Node* root) {
    if (root == nullptr) return;

    postorderTraversal(root->left);  // Visit left subtree
    postorderTraversal(root->right); // Visit right subtree
    cout << root->data << " ";       // Print root node
}

// Main function to demonstrate tree traversal
int main() {
    /* Constructing the following binary tree:
            1
           / \
          2   3
         / \   \
        4   5   6
    */

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->right = new Node(6);

    cout << "Inorder Traversal: ";
    inorderTraversal(root);
    cout << endl;

    cout << "Preorder Traversal: ";
    preorderTraversal(root);
    cout << endl;

    cout << "Postorder Traversal: ";
    postorderTraversal(root);
    cout << endl;

    return 0;
}

