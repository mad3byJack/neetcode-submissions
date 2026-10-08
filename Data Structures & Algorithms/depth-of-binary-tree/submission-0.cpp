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
    int maxDepth(TreeNode* root) {
        if (root == NULL) return 0;
        int sum = 0;
        int left = 0;
        int right = 0;
        if (!root->left && !root->right) {
            return 1;
        }
        if (root->left != NULL) {
            left += maxDepth(root->left);
        } 
        if (root->right != NULL) {
            right += maxDepth(root->right);
        }
        sum += std::max(left, right);
        return sum + 1;
    }
};
