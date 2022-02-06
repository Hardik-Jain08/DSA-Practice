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
    ListNode* res;
    void helper(ListNode* p) {
        if(!p->next) {
            res = p;
            return;
        }
        helper(p->next);
        p->next->next = p;
    }
    ListNode* reverseList(ListNode* head) {
        if(!head) return head;
        ListNode* p = head;
        helper(p);
        p->next = NULL;
        return res;
    }
};