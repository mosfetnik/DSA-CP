#include <bits/stdc++.h>
using namespace std;

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

            if (i == n-1) // just chsnge this n ==0 to find out the left view
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
