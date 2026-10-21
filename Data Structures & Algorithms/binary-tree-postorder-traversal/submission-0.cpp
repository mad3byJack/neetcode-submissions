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
    vector<int> postorderTraversal(TreeNode* root) {
        if (root == NULL) return {};
        vector<int> res;
        vector<int> templ = postorderTraversal(root->left);
        vector<int> tempr = postorderTraversal(root->right);
        res.insert(res.end(), templ.begin(), templ.end());
        res.insert(res.end(), tempr.begin(), tempr.end());
        res.push_back(root->val);
        return res;
    }
};