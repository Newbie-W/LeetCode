/*
执行用时 : 80 ms, 在Add Two Numbers的C提交中击败了2.84% 的用户
内存消耗 : 17.8 MB, 在Add Two Numbers的C提交中击败了0.97% 的用户
*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
/*
一些测试用例
[2,4,3]
[5,6,4]
[8,1]
[2]
[1]
[9,9]
*/
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* ans=(struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode* an = ans;
    ans->next=NULL;
    ans->val=0;
    int t=0;
    while (l1!=NULL || l2!=NULL)
    { 
        //ans->val = (t + l1->val + l2->val) % 10;
        //t = (t + l1->val + l2->val) / 10; 
        if (l1==NULL && l2!= NULL)
        {
            t = ans->val + l2->val;
            ans->val = t % 10;
            ans->next = l2->next;
            l2 = l2->next;
        }
        else if (l2==NULL && l1!=NULL)
        {
            t = ans->val + l1->val;
            ans->val = t % 10;
            ans->next = l1->next;
            l1 = l1->next;
        }
        else 
        {
            t = ans->val + l1->val + l2->val;
            ans->val = t % 10;
            l1 = l1->next;
            l2 = l2->next;
        }
        if (l1!=NULL || l2!=NULL || t/10)
        {
            //printf("ans->val=%d,%d,%d\n",ans->val,t,0);
            struct ListNode* node = (struct ListNode*)malloc(sizeof(struct ListNode));
            node->next=NULL;
            node->val=0;
            ans->next = node;
            ans->next->val = t/10;
        }
        ans = ans->next;
    }
    //printf("ans->val=%d,%d,%d\n",ans->val,(ans->next)->val);
    return an;
}
