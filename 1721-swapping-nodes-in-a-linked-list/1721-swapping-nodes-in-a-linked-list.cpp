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
        ListNode* p = head;
        int s = 0;
        while(p != NULL){
            s++;
            p = p->next;
        }
        ListNode* t = head;
        for(int i = 0; i < k - 1; i++){
            t = t->next;
        }
        int temp = t->val;
        ListNode* t1 = head;
        for(int i = 0; i < s - k; i++){
            t1 = t1->next;
        }
        t->val = t1->val;
        t1->val = temp;
        return head;
                
    }
};