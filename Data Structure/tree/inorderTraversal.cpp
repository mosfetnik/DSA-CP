#include <bits/stdc++.h>
using namespace std;

// & step 1 :creating a node which have one data and two pointer (left and right)

struct Node
{
    int data;
    Node *left;
    Node *right;

    // & step 2: initlization the constructor

    Node(int val)
    {
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }
};
// & step 3:  creating rescursive function

void inorderTravaersal(Node *root, vector<int> &arr)
{

    if (root == NULL)
    {
        return;
    }

    inorderTravaersal(root->left, arr);
    arr.push_back(root->data);
    inorderTravaersal(root->right, arr);
}

// *step 4: storing the inorderd traversal value in vector
vector<int> orderTraversal(Node *root)
{
    vector<int> arr;
    inorderTravaersal(root, arr);
    return arr;
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    // *Getting inorder traversal
    vector<int> result = orderTraversal(root);

    // *Displaying the inorder traversal result
    cout << "Inorder Traversal: ";
    for (int val : result)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
