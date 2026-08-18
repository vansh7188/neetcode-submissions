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
    int dfs(TreeNode* root, int ans){
        if(root==nullptr)return ans;
        int left = dfs(root->left,ans+1);
        int right= dfs(root->right, ans+1);
        return max(left,right);
    }
public:
    int maxDepth(TreeNode* root) {
        return dfs(root,0);
    }
};
