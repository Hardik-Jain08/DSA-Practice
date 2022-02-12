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
        ListNode* p = head;
        int s = 0;
        while(p != NULL){
            s++;
            p = p->next;
        }
        if(s == 1 || s == 0){
            return NULL;
        }
        if(s == n) return head->next;
        ListNode* t1 = head;
        for(int i = 0; i < s - n - 1; i++){
            t1 = t1->next;
        }
        ListNode* temp = t1->next;
        t1->next = t1->next->next;
        temp->next = NULL;
        return head;
    }
};