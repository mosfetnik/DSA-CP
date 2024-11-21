// #include <bits/stdc++.h>
// using namespace std;

#include <iostream>
#include <vector>
#include <queue> 

using namespace std;

// TreeNode struct represents
// a node in a binary tree
struct TreeNode {
    int val; 
    TreeNode* left;
    TreeNode* right;

    

   
    TreeNode(int x) {

       this->val = x;
        this->left = NULL;
        this->right = NULL;
    }

    
};


class Solution {
public:
    // Function to perform level-order
    // traversal of a binary tree
    vector<vector<int>> levelOrder(TreeNode* root) {
        // Create a 2D vector to store levels
        vector<vector<int>> ans; 
        if (root == nullptr) {
            // If the tree is empty,
            // return an empty vector
            return ans; 
        }
        
        // Create a queue to store nodes
        // for level-order traversal
        queue<TreeNode*> q; 
        // Push the root node to the queue
        q.push(root); 

        while (!q.empty()) {
            // Get the size of the current level
            int size = q.size(); 
            // Create a vector to store
            // nodes at the current level
            vector<int> level; 

            for (int i = 0; i < size; i++) {
                // Get the front node in the queue
                TreeNode* node = q.front(); 
                // Remove the front node from the queue
                q.pop(); 
                // Store the node value
                // in the current level vector
                level.push_back(node->val); 

                // Enqueue the child nodes if they exist
                if (node->left != nullptr) {
                    q.push(node->left);
                }
                if (node->right != nullptr) {
                    q.push(node->right);
                }
            }
            // Store the current level
            // in the answer vector
            ans.push_back(level); 
        }
        // Return the level-order
        // traversal of the tree
        return ans; 
    }
};

// Function to print
// the elements of a vector
void printVector(const vector<int>& vec) {
    // Iterate through the
    // vector and print each element
    for (int num : vec) {
        cout << num << " ";
    }
    cout << endl;
}

// Main function
int main() {
    // Creating a sample binary tree
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    // Create an instance
    // of the Solution class
    Solution solution; 
    // Perform level-order traversal
    vector<vector<int>> result = solution.levelOrder(root); 

    cout << "Level Order Traversal of Tree: "<< endl;

    // Printing the level order traversal result
    for (const vector<int>& level : result) {
        printVector(level);
    }

    return 0;
}
                            
                        







































// struct Node
// {

//     int data;
//     Node *left;
//     Node *right;

//     Node(int val)
//     {
//         this->data = val;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };

// Node *buildTree(Node *root)
// {
//     cout << "Enter the data" << endl;

//     int data;
//     cin >> data;
//     root = new Node(data);

//     if (data == -1)
//     {
//         return NULL;
//     }
//     cout << "Enter data for inserting in left of " << data << endl;
//     root->left = buildTree(root->left);
//     cout << "Enter data for inserting in right of " << data << endl;
//     root->right = buildTree(root->right);
//     return root;
// }
// void levelTraversal(Node *root)
// {

//     queue<Node *> q;
//     q.push(root);
//     q.push(NULL);

//     while (!q.empty())
//     {
//         Node *temp = q.front();
//         q.pop();

//         if (temp == NULL)
//         {

//             cout << endl
//                  << " ";

//             if (!q.empty())
//             {
//                 q.push(NULL);
//             }
//         }

//         else
//         {
//             cout << temp->data << " ";

//             if (temp->left)
//             {
//                 q.push(temp->left);
//             }
//             if (temp->right)
//             {
//                 q.push(temp->right);
//             }
//         }
//     }
// }

// int main()
// {
//     Node *root = NULL;
//     root = buildTree(root);
//     // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
//     // level order
//     cout << "Printing the level order tracersal output " << endl;
//     levelTraversal(root);

//     return 0;
// }