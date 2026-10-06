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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL){
            return NULL;
        }

        vector<int> arr;
        ListNode* cur1=head;
        ListNode* cur2=head->next;
        
        while(cur1!=NULL){
            arr.push_back(cur1->val);
            if(cur1->next == NULL){
                break;
            }
            cur1=cur1->next->next;
        }
        while(cur2!=NULL){
            arr.push_back(cur2->val);
            if(cur2->next == NULL){
                break;
            } 
            cur2=cur2->next->next;
        }

        ListNode* cur=head;
        int i=0;
        while(cur!=NULL){
            cur->val=arr[i];
            i++;
            cur=cur->next;
        }
        return head;
    }
};