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
    ListNode* deleteMiddle(ListNode* head) {
        int s = 0;
        for(ListNode* temp = head; temp != nullptr; temp = temp->next) s++;
        if(s == 1) return nullptr;
        ListNode* temp = head;
        for(int i = 0; i < (s/2-1); i++){
            temp = temp->next;
        }
        temp->next = temp->next->next;
        return head;
    }
};