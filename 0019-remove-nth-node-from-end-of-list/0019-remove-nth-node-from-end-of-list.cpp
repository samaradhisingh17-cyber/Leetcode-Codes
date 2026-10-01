/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* cur = head;
        int len=0;
        while(cur != NULL){
            len++;
            cur = cur -> next;
        }
        ListNode dummy(0, head);
        ListNode *temp = &dummy;
        cur = head;
        while(len != n){
            cur = cur->next;
            len--;
            temp = temp->next;
        }
        temp->next = cur->next;
        return dummy.next;
    }
};