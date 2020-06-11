/*
执行用时 :8 ms, 在所有 C++ 提交中击败了96.43%的用户
内存消耗 :7.8 MB, 在所有 C++ 提交中击败了100.00%的用户
*/ 
/*
用例：
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
        if (!isLoop) return NULL;	//无环
		
        fast = head;
        while (fast != slow) {
            fast = fast->next;
            slow = slow->next;
        }
        return slow;
    }
};