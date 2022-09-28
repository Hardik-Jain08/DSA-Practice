class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        vector<int> nge(nums2.size());
        for(int i = nums2.size() - 1; i >= 0; i--){
            if(st.empty()){
                nge[i] = -1;
            }else if(st.top() > nums2[i]){
                nge[i] = st.top();
            }else{
                while(!st.empty() && st.top() <= nums2[i]){
                    st.pop();
                }
                if(st.empty()){
                    nge[i] = -1;
                }else{
                    nge[i] = st.top();
                }
            }
            st.push(nums2[i]);
            cout << nge[i] << " ";
        }
        vector<int> ans(nums1.size());
        for(int i = 0; i < nums1.size(); i++){
            for(int j = 0; j < nums2.size(); j++){
                if(nums1[i] == nums2[j]){
                    ans[i] = nge[j];
                }
            }
        }
        return ans;
    }
};