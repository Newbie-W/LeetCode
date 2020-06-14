/*
执行用时 :16 ms, 在所有 C++ 提交中击败了17.12%的用户
内存消耗 :8.3 MB, 在所有 C++ 提交中击败了100.00%的用户
*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
 /*
 迭代方式
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) { //无头结点
        if (head==NULL)
            return NULL;
        ListNode *pre = NULL;
        ListNode *cur = head;
        ListNode *next = cur->next;
        while (cur->next!=NULL) {
            //printf("~ cur = %d\n", cur->val);
            next = cur->next;
            cur->next = pre;
            pre = cur;
            cur = next;
        }
        cur->next = pre;
        return cur;
    }
};

/*
递归方式
*/
class Solution {
public:
    ListNode* reverseList(ListNode* head) { //无头结点
        if (head==NULL)
            return NULL;
        ListNode *cur = head;
        ListNode *rest = cur->next;
        if (rest == NULL) return head;
        rest = reverseList(rest);
        cur->next->next = cur;
        cur->next = NULL;
        return rest;
    }
};