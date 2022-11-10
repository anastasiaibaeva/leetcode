/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int dop(TreeNode* root, int sum, bool is_left) {
        if (!root) {
            return 0;
        }
        if (!root->left && !root->right && is_left) {
            return root->val;
        }
        return dop(root->right, sum, false) + dop(root->left, sum, true);
    }
    
    int sumOfLeftLeaves(TreeNode* root) {
        return dop(root, 0, false);
    }
};