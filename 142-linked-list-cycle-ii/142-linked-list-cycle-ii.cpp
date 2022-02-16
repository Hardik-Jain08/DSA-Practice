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
    ListNode *detectCycle(ListNode *head) {
        if(head == NULL || head->next == NULL) return NULL;
        unordered_map<ListNode*, bool> umap;
        ListNode* p = head;
        while(p!=NULL){
            if(umap[p] == true){
                return p;
            }
            umap[p] = true;
            p = p->next;
        }
        return NULL;
    }
};