/*
执行用时 :12 ms, 在所有 C++ 提交中击败了67.57%的用户
内存消耗 :16.8 MB, 在所有 C++ 提交中击败了100.00%的用户
*/ 

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (root == NULL) return 0;
        int left = maxDepth(root->left)+1;
        int right = maxDepth(root->right)+1;
        return left>right?left:right;
    }
};