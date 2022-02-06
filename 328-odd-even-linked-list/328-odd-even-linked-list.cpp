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
    ListNode* oddEvenList(ListNode* head) {
        ListNode* p = head;
        vector<int> odd;
        vector<int> even;
        int n = 1;
        while(p){
            if((n & 1) == 0) {
                even.push_back(p->val);
                n++;
            }else {
                odd.push_back(p->val);
                n++;
            }
            p = p->next;
        }
        ListNode res(0),*t = &res;
        for(int i = 0; i < odd.size(); i++) {
            t->next = new ListNode(odd[i]);
            t = t->next;
        }for(int i = 0; i < even.size(); i++) {
            t->next = new ListNode(even[i]);
            t = t->next;
        }
        return res.next;
    }
};