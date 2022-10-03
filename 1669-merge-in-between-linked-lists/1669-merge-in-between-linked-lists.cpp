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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        int k = a;
        ListNode* t = list1;
        while(a-- > 1) t = t->next;
        ListNode* t2 = t;
        b -= k;
        while(b-- >= -1) t = t->next;
        t2->next = list2;
        while(t2->next != nullptr) t2 = t2->next;
        t2->next = t;
        // cout << t->val << " " << t2->val;
        return list1;
    }
};