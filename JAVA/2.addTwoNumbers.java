/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
public class Solution {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        ListNode t = new ListNode(0);
        ListNode res = t;
        int tmp = 0, sum, x, y;
        do{
            x = (l1 == null ? 0 : l1.val);
            y = (l2 == null ? 0 : l2.val);
            sum = x + y + tmp;
            res.next = new ListNode(sum % 10);
            tmp = sum / 10;
            res = res.next;
            if(l1 != null) l1 = l1.next;
            if(l2 != null) l2 = l2.next;
        }while(l1 != null || l2 != null || tmp == 1);
        return t.next;
    }
}
