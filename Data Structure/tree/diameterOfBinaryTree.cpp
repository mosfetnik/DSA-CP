class Solution {
public:
    int solve(TreeNode* val, int& result) {

        if (val == NULL) {
            return 0;
        }

        int left = solve(val->left, result);
        int right = solve(val->right, result);

        result = max(result, left + right);
        return max(left, right) + 1;
    }

    int diameterOfBinaryTree(TreeNode* val) {

        if (val == NULL) {
            return 0;
        }

        int result = INT_MIN;
        solve(val, result);
        return result;
    }
};