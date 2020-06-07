/*
ִ����ʱ :16 ms, ������ C++ �ύ�л�����17.12%���û�
�ڴ����� :8.3 MB, ������ C++ �ύ�л�����100.00%���û�
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
 ������ʽ
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) { //��ͷ���
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
�ݹ鷽ʽ
*/
class Solution {
public:
    ListNode* reverseList(ListNode* head) { //��ͷ���
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