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
    int pairSum(ListNode* head) {
        ListNode* p = head;
        vector<int> vec;
        while(p != NULL){
            vec.push_back(p->val);
            p = p->next;
        }
        int vfront = 0, vback = vec.size() - 1;
        int sum = 0, mxSum = 0;
        while(vfront < vback){
            sum = vec[vfront++] + vec[vback--];
            mxSum = max(sum,mxSum);
        }
        return mxSum;
    }
};