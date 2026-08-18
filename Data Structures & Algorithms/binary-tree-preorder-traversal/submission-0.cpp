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
    int dfs(TreeNode* root, vector<int>&ans){
        if(root==nullptr)return 0;
        ans.push_back(root->val);
        dfs(root->left, ans);
        dfs(root->right, ans);
        return 0;
    }
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>ans;
        dfs(root, ans);
        return ans;
    }
};