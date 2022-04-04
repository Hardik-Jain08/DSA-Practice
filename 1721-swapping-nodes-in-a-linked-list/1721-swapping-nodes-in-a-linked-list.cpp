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
        ListNode* temp = head;
        while(k != 1){
            k--;
            temp = temp->next;
        }
        ListNode* temp2 = head,* temp1 = temp;
        while(temp->next != nullptr){
            temp= temp->next;
            temp2 = temp2->next;
        }
        swap(temp1->val,temp2->val);
        return head;
    }
};