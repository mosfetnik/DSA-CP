#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{

    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int data)
    {
        this->val = data;
        this->right = NULL;
        this->left = NULL;
    }
};

int solve(TreeNode *val, int &result)
{

    if (val == NULL)
    {
        return 0;
    }

    int left = solve(val->left, result);
    int right = solve(val->right, result);

    result = max(result, left + right);
    return max(left, right) + 1;
}

int main()
{

    int diameterOfBinaryTree(TreeNode * val)
    {

        if (val == NULL)
        {
            return 0;
        }
        int result = INT_MIN;
        solve(val, result);
        return result;
    }
    return 0;
}