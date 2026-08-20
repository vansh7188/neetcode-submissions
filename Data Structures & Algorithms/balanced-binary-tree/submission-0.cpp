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
private:
    int checkHeight(TreeNode* node) {  // ✅ corrected function name capitalization
        if (!node) return 0;

        int leftHeight = checkHeight(node->left);
        if (leftHeight == -1) return -1;  // left subtree not balanced

        int rightHeight = checkHeight(node->right);
        if (rightHeight == -1) return -1; // right subtree not balanced

        if (abs(leftHeight - rightHeight) > 1) return -1; // not balanced

        return max(leftHeight, rightHeight) + 1;
    }

public:
    bool isBalanced(TreeNode* root) {
        return checkHeight(root) != -1;  // ✅ corrected function name
    }
};
