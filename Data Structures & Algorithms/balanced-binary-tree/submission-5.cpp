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
    bool isBalanced(TreeNode* root) {
        if (root == NULL) return true;
        if (!isBalanced(root->left)) return false;
        if (!isBalanced(root->right)) return false;
        int dif = abs(findHeight(root->left) - findHeight(root->right));
        if (dif > 1) return false;
        return true;
    }

    int findHeight(TreeNode* root) {
        if (root == NULL) return -1;
        if (!root->left && !root->right) return 0;
        int height = std::max(findHeight(root->left), findHeight(root->right)) + 1;
        return height;
    }
};
