class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size(), loop = 2*n;
        vector<int> nge(n,-1);
        stack<int> st;
        for(int i = 0; i < loop; i++){
            while(!st.empty() && nums[st.top()] < nums[i%n]){
                nge[st.top()] = nums[i%n];
                st.pop();
            }
            st.push(i%n);
        }
        return nge;
    }
};