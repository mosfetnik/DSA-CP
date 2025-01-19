

TreeNode *findMin(TreeNode *root)
{

    if (root == NULL)
    {
        return -1;
    }

    NodeTree *curr = root;
    while (curr->left != NULL)
    {
        curr = curr->left;
    }

    return curr->data;
}