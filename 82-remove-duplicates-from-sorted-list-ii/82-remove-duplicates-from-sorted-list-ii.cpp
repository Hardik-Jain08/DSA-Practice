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
    ListNode* deleteDuplicates(ListNode* head) {
        //base case
        if(head == nullptr || head->next == nullptr) return head;
        
        ListNode* prev = nullptr;
        ListNode* curr = head;
        
        while(curr != nullptr && curr->next != nullptr){
            //if next elements is duplicate
            if(curr->val == curr->next->val){
                while(curr->next != nullptr && curr->val == curr->next->val){
                    curr = curr->next;
                }
                if(prev != nullptr){
                    curr = curr->next;
                    prev->next = curr;
                }else{//if starting elements are duplicates
                    head = curr->next;
                    curr = curr->next;
                }
            }else{// if next element is distinct
                prev = curr;
                curr = curr->next;
            }
        }
        return head;
    }
};