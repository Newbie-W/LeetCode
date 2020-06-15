/*
��һ�������������ƣ�ֻ�Ƿ����жϴ����һ�㣬�����˾���˼·�ϸ������һ�㡣
�ؼ����ڣ�Ҷ�ӽ��ʱ����ֵ�����ܺ͡���Ҷ�ӽ��ʱ�����к��ӵĽ���������ȥ������ֻ�������к��ӽ��ģ���ע��������Ϊ�յ������

��һ��
ִ����ʱ :8 ms, ������ C++ �ύ�л�����38.68%���û�
�ڴ����� :12.4 MB, ������ C++ �ύ�л�����62.50%���û�

������
ִ����ʱ :12 ms, ������ C++ �ύ�л�����7.89%
�ڴ����� :12.6 MB, ������ C++ �ύ�л�����31.25%���û�
*/

/*
������
[1,2,3]
[0,1]
[1,0]
[]
*/
 
 /*
 ��һ
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
    int sumNumbers(TreeNode* root) {
        return sumFun(root, 0);
    }
    int sumFun(TreeNode *root, int tmp) {
        if (root == NULL) {
            //printf("-- tmp = %d\n", tmp);
            return 0;
        }
        tmp = tmp*10 + root->val;
        //printf("%d, tmp = %d\n", root->val, tmp);
        if (root->left==NULL && root->right==NULL)
            return tmp;
        return sumFun(root->left, tmp) + sumFun(root->right, tmp);
    }
};

/*
����
*/
class Solution {
public:
    int sumNumbers(TreeNode* root) {
        return sumFun(root, 0);
    }
    int sumFun(TreeNode *root, int tmp) {
        if (root == NULL) return 0;
        tmp = tmp*10 + root->val;
        //printf("%d, tmp = %d\n", root->val, tmp);
        if (root->left==NULL && root->right==NULL)
            return tmp;
        else if (root->left == NULL)
            return sumFun(root->right, tmp);
        else if (root->right == NULL)
            return sumFun(root->left, tmp);
        return sumFun(root->left, tmp) + sumFun(root->right, tmp);
    }
};