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
        int s = 0;
        for(ListNode* temp = head; temp != nullptr; temp = temp->next) s++;
        if (s == n) return head->next;
        ListNode* temp = head;
        for(int i = 0; i < (s-n-1); i++){
            temp = temp->next;
        }
        temp->next = temp->next->next;
        return head;
    }
};