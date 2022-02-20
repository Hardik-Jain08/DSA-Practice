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
    void helper(vector<int> &v, int st, int en){
        if(en >= v.size()) return;
        while(st < en){
            swap(v[st++], v[en--]);
        }
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        vector<int> vec;
        ListNode* p = head;
        while(p != nullptr){
            vec.push_back(p->val);
            p = p->next;
        }
        int n = vec.size() - 1;
        for(int i = 0; i <= n; i += k){
            int e = i + k - 1;
            helper(vec, i, e);
        }
        
        ListNode* t = head;
        for(int &x: vec){
            t->val = x;
            t = t->next;
        }
        return head;
    }
};