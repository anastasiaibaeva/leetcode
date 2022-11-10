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
    bool help(TreeNode* root, int num) {
        if (!root) {
            return true;
        }
        if (root->val != num) {
            return false;
        }
        return help(root->left, num) && help(root->right, num);
    }
    bool isUnivalTree(TreeNode* root) {
        return help(root, root->val);
    }
};