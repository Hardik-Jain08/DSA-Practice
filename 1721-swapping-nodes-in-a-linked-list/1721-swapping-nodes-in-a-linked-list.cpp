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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* t = head, *f = head, *s = head;
        while(--k) {
            t =  t->next;
        }
        f = t;
        while(f->next) {
            f = f->next;
            s = s->next;
        }
        swap(t->val, s->val);
        return head;
    }
};