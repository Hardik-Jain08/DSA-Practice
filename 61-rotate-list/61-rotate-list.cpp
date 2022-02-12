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
private:
    void rev(vector<int> &arr, int start, int end){
        while(start < end){
            swap(arr[start++], arr[end--]);
        }
    }
    void rotate(vector<int> &arr, int k, int size){
        rev(arr,0,size - k - 1);
        rev(arr,size - k,size - 1);
        rev(arr,0,size - 1);
    }
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL) return NULL;
        ListNode* p = head;
        vector<int> arr;
        while(p != NULL){
            arr.push_back(p->val);
            p = p->next;
        }
        int n = arr.size();
        k = k % n;
        rotate(arr, k, n);
        ListNode* temp = head;
        for(int i = 0; i < n; i++){
            temp->val = arr[i];
            temp = temp->next;
        }
        return head;
    }
};