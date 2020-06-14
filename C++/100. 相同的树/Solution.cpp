/*
ִ����ʱ :0 ms, ������ C++ �ύ�л�����100.00%���û�
�ڴ����� :7.6 MB, ������ C++ �ύ�л�����100.00%���û�
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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p==NULL && q==NULL) return true;
        if (p==NULL || q==NULL) return false;
        //printf("%d, %d, %d\n",p->val, q->val, p==q);
        if (p->val != q->val) return false;
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};