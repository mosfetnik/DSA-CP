#include <bits/stdc++.h>
using namespace std;

// step 1: creating a Node

struct Node
{

    int data;
    Node *left;
    Node *right;

    // step 2 : creating constructor

    Node(int val)
    {
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }
};

// step 3 : creating a recursive function
void postOrder(Node *root, vector<int> &arr)
{

    // base case
    if (root == NULL)
    {
        return;
    }

    // recursive case
    postOrder(root->left, arr);
    postOrder(root->right, arr);
    arr.push_back(root->data);
}

vector<int> postTravarsal(Node *root)
{

    vector<int> arr;
    postOrder(root, arr);
    return arr;
}

// &step 5 : main function
int main()
{

    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->right->right = new Node(5);

    // &step 6: storing the result in ressultant vector
    vector<int> result = postTravarsal(root);

    cout << " Post order traversal"<<endl;
    for (int val : result)
    {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}