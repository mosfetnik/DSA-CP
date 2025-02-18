#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// Function to find ceil in BST
int findCeil(TreeNode* root, int X) {
    int ceil = -1;
    while (root) {
        if (root->val == X) {
            return X;  // If we find X, return it directly
        }
        if (root->val > X) {
            ceil = root->val;  // Possible ceil found, move left
            root = root->left;
        } else {
            root = root->right;  // Move right
        }
    }
    return ceil;
}

// Construct BST from given input
TreeNode* constructBST() {
    TreeNode* root = new TreeNode(5);
    root->left = new TreeNode(4);
    root->right = new TreeNode(6);
    root->left->left = new TreeNode(3);
    root->right->right = new TreeNode(7);
    root->left->left->left = new TreeNode(1);
    return root;
}

int main() {
    TreeNode* root = constructBST();
    int X = 3;
    cout << "Ceil of " << X << " is: " << findCeil(root, X) << endl;
    return 0;
}
