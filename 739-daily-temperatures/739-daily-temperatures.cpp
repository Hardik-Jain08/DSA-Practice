class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        int n = t.size();
        stack<pair<int,int>> st;
        for(int idx = n - 1; idx >= 0; idx--){
            while(!st.empty() && st.top().second <= t[idx]){
                st.pop();
            }
            int temp = t[idx];
            if(st.empty()){
                t[idx] = 0;
            }else{
                t[idx] = st.top().first - idx;
            }
            st.push({idx, temp});
        }
        return t;
    }
};