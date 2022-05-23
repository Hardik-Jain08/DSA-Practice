class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> umap;
        int n1 = nums1.size();
        int n2 = nums2.size();
        for(int i = 0; i < n1; i++){
            umap[nums1[i]] = i;
        }
        vector<int> res(n1,0);
        stack<int> st;
        for(int i = n2 - 1; i >= 0; i--){
            while(!st.empty() && st.top() < nums2[i]){
                st.pop();
            }
            if(umap.find(nums2[i]) != umap.end()){
                if(st.empty()){
                    res[umap[nums2[i]]] = -1;
                }else{
                    res[umap[nums2[i]]] = st.top();
                }
            }
            st.push(nums2[i]);
        }
        return res;
    }
};