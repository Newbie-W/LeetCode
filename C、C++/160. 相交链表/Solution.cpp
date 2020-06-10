/*
执行用时 :788 ms, 在所有 C++ 提交中击败了5.07%的用户
内存消耗 :14.5 MB, 在所有 C++ 提交中击败了100.00%的用户

使用了cur1和cur2指向两个链表的元素，对地址一一对比，找到相同指针，赋给intersectionNode即可。另外注意考虑链表为空的情况。
*/ 
/*
用例：（每5行为一个用例）
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