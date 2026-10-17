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
    ListNode* partition(ListNode* head, int x) {
        vector<int> arr;
        ListNode* temp = head;
        while (temp != NULL) {
            if (temp->val < x) {
                arr.push_back(temp->val);
            }
            temp = temp->next;
        }
        temp = head;
        ListNode* cur = head;
        while (cur != NULL) {
            if (cur->val >= x) {
                arr.push_back(cur->val);
            }
            cur = cur->next;
        }
        for (int i = 0; i < arr.size(); i++) {
            temp->val = arr[i];
            temp = temp->next;
        }
        return head;
    }
};