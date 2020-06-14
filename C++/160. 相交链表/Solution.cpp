/*
ִ����ʱ :788 ms, ������ C++ �ύ�л�����5.07%���û�
�ڴ����� :14.5 MB, ������ C++ �ύ�л�����100.00%���û�

ʹ����cur1��cur2ָ�����������Ԫ�أ��Ե�ַһһ�Աȣ��ҵ���ָͬ�룬����intersectionNode���ɡ�����ע�⿼������Ϊ�յ������
*/ 
/*
��������ÿ5��Ϊһ��������
8
[4,1,8,4,5]
[5,0,1,8,4,5]
2
3
0
[]
[]
0
0
0
[]
[2]
0
1
3
[3]
[2,3]
0
1
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *intersectionNode = NULL;
        ListNode *cur2 = headB;
        if (headA==NULL || headB == NULL) return NULL;
        for (ListNode* cur1 = headA; cur1!=NULL; ) {
            if (cur1 == cur2) {
                intersectionNode = new ListNode(cur1->val);
                break;
            } else if (cur2 == NULL){
                cur2 = headB;
                cur1 = cur1->next;
            } else {
                cur2 = cur2->next;
            }
        }
        return intersectionNode;
    }
};