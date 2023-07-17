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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int> s1,s2, ans;
        ListNode* t1 = l1, *t2 = l2;
        while(t1) {
            s1.push(t1->val);
            t1 = t1->next;
        }
        while(t2) {
            s2.push(t2->val);
            t2 = t2->next;
        }
        int c = 0, temp = 0;
        while(!s1.empty() || !s2.empty() || c) {
            temp = c;
            if(!s1.empty() && !s2.empty()) {
                temp = s1.top() + s2.top() + c;
                s1.pop(), s2.pop();
            } else if(!s1.empty()) {
                temp = s1.top() + c;
                s1.pop();
            } else if(!s2.empty()) {
                temp = s2.top() + c;
                s2.pop();
            }
            c = temp/10;
            temp %= 10;
            ans.push(temp);
        }
        ListNode* node = new ListNode();
        ListNode* head = node;
        while(!ans.empty()) {
            head->next = new ListNode(ans.top());
            head = head->next;
            ans.pop();
        }
        return node->next;
    }
};