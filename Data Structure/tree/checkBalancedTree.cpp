    int checkHeight(TreeNode* root) {
        // base case to finding the height of left and right sub tree
        if (root == NULL) {
            return 0;
        }

        int left = checkHeight(root->left);
        if (left == -1)
            return -1;
        int right = checkHeight(root->right);
        if (right == -1)
            return -1;
 // check the if left - right > 1 it means its not balanced tree return -1
        if (abs(left - right) > 1)
            return -1;

        return max(left, right) + 1;
    }
    bool isBalanced(TreeNode* root) { return checkHeight(root) != -1; }
};