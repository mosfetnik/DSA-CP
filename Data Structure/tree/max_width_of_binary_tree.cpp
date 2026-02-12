#include <bits/stdc++.h>
using namespace std;

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

Node *buildTree()
{
    int data;
    cin >> data;

    if (data == -1)
        return NULL;

    Node *root = new Node(data);

    root->left = buildTree();
    root->right = buildTree();
    return root;
}
int maxwidth(Node *root)
{
    if (!root)
        return 0;
    queue<pair<Node *, int>> que;
    que.push({root, 0});

    int max_width = 0;

    while (!que.empty())
    {
        int n = que.size();
        int l = que.front().second;
        int r = que.back().second;

        max_width = max(max_width, r - l + 1);

        while (n--)
        {
            Node *curr = que.front().first;
            int idx = que.front().second;
            que.pop();

            if (curr->left != NULL)
                que.push({curr->left, 2 * idx + 1});

            if (curr->right != NULL)
                que.push({curr->right, 2 * idx + 2});
        }
    }

    return max_width;
}

int main()
{

    Node *root = buildTree();
    int view = maxwidth(root);
    cout << view << " ";

    return 0;
}