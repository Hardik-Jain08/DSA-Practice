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
    ListNode* rotateRight(ListNode* head, int k) {
        if(k == 0 || head == nullptr || head->next == nullptr) return head;
        ListNode* ptr = head;
        int s = 0;
        while(ptr->next != nullptr){
            ++s;
            ptr = ptr->next;
        }
        ++s;
        k %= s;
        if(k == 0) return head;
        ListNode* fast = head;
        while(k--){
            fast = fast->next;
        }
        
        ListNode* tail = head;
        while(fast->next != nullptr){
            tail = tail->next;
            fast = fast->next;
        }
        ListNode* newhead = tail->next;
        tail->next = NULL;
        ptr->next = head;
        return newhead;
    }
};