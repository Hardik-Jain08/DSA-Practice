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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* one = list1;
        ListNode* head = new ListNode(0);
        ListNode* temp = head;
        ListNode* two = list2;
        while(one != NULL || two != NULL){
            if(one != NULL && two != NULL && one->val <= two->val){
                temp->next = new ListNode(one->val);
                one = one->next;
                temp = temp->next;
            }else if(one != NULL && two != NULL && one->val > two->val){
                temp->next = new ListNode(two->val);
                two = two->next;
                temp = temp->next;
            }else if(one != NULL){
                temp->next = new ListNode(one->val);
                one = one->next;
                temp = temp->next;
            }else if(two != NULL){
                temp->next = new ListNode(two->val);
                two = two->next;
                temp = temp->next;
            }
        }
        return head->next;
    }
};