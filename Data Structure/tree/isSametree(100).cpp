  bool isSameTree(TreeNode* p, TreeNode* q) {

        // edge case : if both are null it means it equel

        if (p == NULL && q == NULL) {
            return true;
        }

        // base case => check if (one root is null == return false)
        if (p == NULL || q == NULL) {
            return false;
        }

        // step 3 = find the value of each node and compare it

        int one = (p->val);
        int two = (q->val);

        // step 4: check both value and again recursive call the to find next
        // subtree
        //  value

        return (one == two) && isSameTree(p->left, q->left) &&
               isSameTree(p->right, q->right);
    }