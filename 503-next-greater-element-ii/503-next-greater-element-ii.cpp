class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        stack<int> st;
        vector<int> res(n, -1);
        int loop = 2 * n;
        for(int i = 0; i < loop ; i++){
            while(!st.empty() && nums[st.top()] < nums[i % n]){
                res[st.top()] = nums[i % n];
                st.pop();
            }
            st.push(i % n);
        }
        return res;
    }
};