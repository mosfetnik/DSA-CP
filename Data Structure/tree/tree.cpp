#include <bits/stdc++.h>
using namespace std;

// class node
// {
// public:
//     int data;
//     node *left;
//     node *right;

//     node(int d)
//     {
//         this->data = d;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };

// node *
// buildTree(node *root)
// {

//     cout << "Enter the data" << endl;
//     int data;
//     cin >> data;

//     root = new node(data);
//     if (data == -1)
//     {
//         return NULL;
//     }

//     cout << "Enter the data for inserting in left" << endl;
//     root->left = buildTree(root->left);
//     cout << "Enter the data for inserting in right" << endl;
//     root->right = buildTree(root->right);
//     return root;
// }

// int main()
// {
//     node *root = NULL;
//     root = buildTree(root);
//     return 0;
// }

//  * preordr trevaersal

// #include <bits/stdc++.h>
// using namespace std;

// struct Node
// {

//     int data;
//     Node *left;
//     Node *right;

//     Node(int val)
//     {
//         this->data = val;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };
// Node *buildTree()
// {
//     int data;
//     cin >> data;
//     if (data == -1)
//         return NULL;

//     Node *root = new Node(data);

//     root->left = buildTree();
//     root->right = buildTree();
// }
// void preorder(Node *root, vector<int> result)
// {
//     if (!root)
//         return;

//     cout << root->data;
//     preorder(root->left, result);
//     preorder(root->right, result);
// }

// int main()
// {
//     Node *root = buildTree();
//     vector<int> result;
//     preorder(root, result);

//     for (int i = 0; i < result.size(); i++)
//     {
//         cout << result[i];
//     }

//     return 0;
// }

//  * Inorde trevaersal

// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {

// public:
//     int data;
//     Node *left;
//     Node *right;

//     Node(int val)
//     {
//         this->data = val;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };

// Node *buildTree()
// {

//     int data;
//     cin >> data;

//     if (data == -1)
//         return NULL;

//     Node *root = new Node(data);

//     root->left = buildTree();
//     root->right = buildTree();
// }

// void inorder(Node *root, vector<int> &result)
// {

//     if (!root)
//         return;

//     inorder(root->left, result);
//     cout << root->data;
//     inorder(root->right, result);
// }

// int main()
// {

//     Node *root = buildTree();

//     vector<int> result;

//     inorder(root, result);

//     return 0;
// }

// * BFS  ==> find the right view of the tree

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }
};

// * building the tree
Node *buildTree()
{
    int data;
    cin >> data;

    if (data == -1)
        return NULL;

    // & building a new node
    Node *root = new Node(data);
    root->left = buildTree();
    root->right = buildTree();
}

vector<int> rightView(Node *root)
{

    if (!root)
        return {};

    queue<Node *> que;
    que.push(root);

    vector<int> result;

    while (!que.empty())
    {
        int n = que.size();
        Node *curr;

        for (int i = 0; i < n; i++)
        {

            curr = que.front();
            que.pop();

            if (i == n - 1) // just chsnge this n ==0 to find out the left view
                result.push_back(curr->data);

            if (curr->left != NULL)
                que.push(curr->left);

            if (curr->right != NULL)
                que.push(curr->right);
        }
    }
    return result;
}

int main()
{
    Node *root = buildTree();
    vector<int> view = rightView(root);

    for (int nums : view)
    {
        cout << nums << " ";
    }
    return 0;
}
