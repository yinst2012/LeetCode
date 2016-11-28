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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode T(0), *res = &T;
        
        int sum, tmp = 0, x, y;
        do{
            x = l1 != NULL ? l1->val : 0;
            y = l2 != NULL ? l2->val : 0;
            sum = x + y + tmp;
            res->next = new ListNode(sum % 10);
            tmp = sum / 10;
            res = res->next;
            if(l1 != NULL) l1 = l1->next;
            if(l2 != NULL) l2 = l2->next;
        }while(l1 != NULL || l2 != NULL || tmp == 1);
        return T.next;
    }
};
