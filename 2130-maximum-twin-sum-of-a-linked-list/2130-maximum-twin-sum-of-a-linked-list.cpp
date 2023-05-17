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
    ListNode* node = nullptr;
    int mx = 0;
    void helper(ListNode* head) {
        if(head) {
            helper(head->next);
            mx = max(mx, node->val+head->val);
            node = node->next;
        }
    }
    int pairSum(ListNode* head) {
        node = head;
        helper(head);
        return mx;
    }
};