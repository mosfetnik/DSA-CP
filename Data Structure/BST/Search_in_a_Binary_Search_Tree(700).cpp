// BST traversal

TreeNode *searchBST(TreeNode *root, int val)
{

    while (root != NULL && root->val != val)
    {

        if (root - val < val)
        {
            root = root->right;
        }
        els
        {
            root = root->left
        }
    }

    return root;
}
