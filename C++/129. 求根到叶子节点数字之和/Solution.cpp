/*
法一、法二基本类似；只是法二判断处理多一点，但个人觉得思路上更好理解一点。
关键在于，叶子结点时，将值算入总和。非叶子结点时，则将有孩子的结点继续算下去（可以只继续算有孩子结点的，但注意整颗树为空的情况）

法一：
执行用时 :8 ms, 在所有 C++ 提交中击败了38.68%的用户
内存消耗 :12.4 MB, 在所有 C++ 提交中击败了62.50%的用户

法二：
执行用时 :12 ms, 在所有 C++ 提交中击败了7.89%
内存消耗 :12.6 MB, 在所有 C++ 提交中击败了31.25%的用户
*/

/*
用例：
[1,2,3]
[0,1]
[1,0]
[]
*/
 
 /*
 法一
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
法二
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