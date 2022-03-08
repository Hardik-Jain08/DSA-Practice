/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(!head || !head->next) return 0;
        ListNode* s = head;
        ListNode* f = head;
        while(f != NULL && f->next != NULL){
            f = f->next->next;
            s = s->next;
            if(f == s){
                return 1;
            }
        }
        return 0;
    }
};