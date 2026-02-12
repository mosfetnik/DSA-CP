#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        data = d;
        left = right = NULL;
    }
};

// Function to build the tree recursively
Node *buildTree(Node *root)
{
    int data;
    cout << "Enter data (-1 for no node): ";
    cin >> data;

    if (data == -1)
        return NULL;

    root = new Node(data);

    cout << "Enter left child of " << data << endl;
    root->left = buildTree(root->left);

    cout << "Enter right child of " << data << endl;
    root->right = buildTree(root->right);

    return root;
}

// Inorder traversal (Left → Root → Right)
void inorder(Node *root)
{
    if (!root)
        return;
    inorder(root->left);
    inorder(root->right);
    cout << root->data << " ";
}

int main()
{
    Node *root = NULL;

    // Build tree
    root = buildTree(root);

    cout << "\nInorder Traversal: ";
    inorder(root);
    cout << endl;

    return 0;
}
