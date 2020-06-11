/*
ִ����ʱ :8 ms, ������ C++ �ύ�л�����96.43%���û�
�ڴ����� :7.8 MB, ������ C++ �ύ�л�����100.00%���û�
*/ 
/*
������
[3,2,0,-4]
1
[1]
-1
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
    ListNode *detectCycle(ListNode *head) {
        ListNode *slow = head;
        ListNode *fast = head;
        bool isLoop = false;
        while (fast && fast->next) {
            //printf("%d  --- %d\n", slow->val, fast->val);
            slow = slow->next;
            fast = fast->next->next;
            //printf("%d  --- %d\n", slow->val, fast->val);
            if (slow == fast) {
                isLoop = true;
                break;
            }
        }
        if (!isLoop) return NULL;	//�޻�
		
        fast = head;
        while (fast != slow) {
            fast = fast->next;
            slow = slow->next;
        }
        return slow;
    }
};