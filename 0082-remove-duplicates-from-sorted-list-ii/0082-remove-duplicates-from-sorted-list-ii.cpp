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
    ListNode* deleteDuplicates(ListNode* head) {
        while(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* cur=head;
        ListNode* prev=NULL;
        while(cur!=NULL){
            if(cur->next!=NULL && cur->val==cur->next->val){
                int val=cur->val;
                while(cur!=NULL && cur->val==val)
                    cur=cur->next;
                if(prev!=NULL){
                    prev->next=cur;
                }
                else{
                    head=cur;
                }
            }
            else{
                prev=cur;
                cur=cur->next;
            }
        }
        return head;
    }
};