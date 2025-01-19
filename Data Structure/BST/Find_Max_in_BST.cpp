
TreeNode *findMin(TreeNode *root)
{

    if (root == NULL)
    {
        return -1;
    }

    NodeTree *curr = root;
    while (curr->right != NULL)
    {
        curr = curr->right;
    }

    return curr->data;
}