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
    ListNode* merge(ListNode* head1, ListNode* head2){
        ListNode* dummy = new ListNode(0);
        ListNode* temp = dummy;
        while(head1 != nullptr && head2 != nullptr){
            if(head1->val <= head2->val){
                temp->next = head1;
                head1 = head1->next;
            }else{
                temp->next = head2;
                head2 = head2->next;
            }
            temp = temp->next;
        }
        if(head1 != nullptr){
            temp->next = head1;
            head1 = head1->next;
        }
        if(head2 != nullptr){
            temp->next = head2;
            head2 = head2->next;
        }
        return dummy->next;
    }
    ListNode* sortList(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        
        ListNode* slow = head, *fast = head, *temp = nullptr;
        while(fast != nullptr && fast->next != nullptr){
            temp = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        temp->next = nullptr;
        
        ListNode* fhn = sortList(head); // first half node
        ListNode* shn = sortList(slow); // second node
        return merge(fhn, shn);
    }
};
