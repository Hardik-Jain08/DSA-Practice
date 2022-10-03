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
        if(list1 == nullptr && list2 == nullptr) return list1;
        if(list1 == nullptr) return list2;
        if(list2 == nullptr) return list1;
        ListNode* l1 = list1, *l2 = list2, *ans = new ListNode(0), *temp = ans;
        while(l1 != nullptr && l2 != nullptr){
            if(l1->val >= l2->val){
                temp->next = new ListNode(l2->val);
                l2 = l2->next;
            }else{
                temp->next = new ListNode(l1->val);
                l1 = l1->next;
            }
            temp = temp->next;
        }
        if(l1 != nullptr){
            temp->next = l1;
        }else if(l2 != nullptr){
            temp->next = l2;
        }
        return ans->next;
    }
};