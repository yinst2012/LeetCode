/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
 明确“=”大部分时间是地址的转移
 
 1.需要在链表头部(ListNode * head)增减一个节点
 ListNode * prevHead = new ListNode(0);
 prevHead->nex = head;
 
 2.Reverse a list:
 ListNode * reverseList(ListNode * head) {
    ListNode * prev = NULL;
    ListNode * curr = head;
    while(curr != NULL){
        ListNode *tmpNext = curr->next;
        curr->next = prev;
        prev = curr;
        curr = tmpNext;
    }
    return prev;
}
