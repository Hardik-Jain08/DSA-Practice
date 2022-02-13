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
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        ListNode* p = head;
        ListNode* t = head->next;
        while(t->next != NULL){
            swap(p->val,t->val);
            p = p->next;
            t = t->next;
            if(p!=NULL) p = p->next;
            if(t->next!=NULL) t = t->next;
        }
        if(t != NULL)
        swap(p->val,t->val);
        return head;
    }
};