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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        vector<int> vec;
        ListNode* t = head;
        while(t != NULL){
            vec.push_back(t->val);
            t = t->next;
        }
        int l = left - 1, r = right - 1;
        while(l < r){
            swap(vec[l++], vec[r--]);
        }
        int n = vec.size();
        ListNode* p = head;
        for(int i = 0; i < n; i++){
            p->val = vec[i];
            p = p->next;
        }
        return head;
    }
};