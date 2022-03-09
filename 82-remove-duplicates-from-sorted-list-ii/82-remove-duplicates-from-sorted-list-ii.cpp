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
    // ListNode* deleteDuplicates(ListNode* head) {
    //     if(!head || !head->next) return head;
    //     ListNode sentinel(0,head);
    //     ListNode* ptr = head->next;
    //     ListNode* curr = head;
    //     // head = &sentinel;
    //     while(ptr != NULL ){
    //         if(curr->val != ptr->val){
    //             head->next = curr;
    //             head = head->next;
    //             curr->next = ptr;
    //             ptr = ptr->next;
    //         }else{
    //             ptr = ptr->next;
    //         }
    //     }
    //     return sentinel.next;
    // }
    ListNode* deleteDuplicates(ListNode* head) {
    if(head == NULL || head->next == NULL) return head;
    
    ListNode* curr = head;
    ListNode* prev = NULL;
    while(curr != NULL && curr->next != NULL) {
        if(curr->val == curr->next->val) {
            while(curr->next != NULL && curr->val == curr->next->val) {
                curr = curr->next;
            }
            if(prev != NULL) {
                prev->next = curr->next;
                curr = curr->next;    
            }else {
                head = curr->next;
                curr = curr->next;   
            }
        }else {
            prev = curr;
            curr = curr->next;
        }
    }
    return head;
    }
};