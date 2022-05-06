class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>> st;
        int i = 0, n = s.size();
        for(i = 0; i < n; i++){
            if(st.empty() || st.top().first != s[i]){
                st.push({s[i], 1});
            }else{
                st.top().second++;
            }
            if(st.top().second >= k){
                st.top().second -= k;
                if(st.top().second == 0){
                    st.pop();
                }
            }
        }
        string res = "";
        while(!st.empty()){
            int cnt = st.top().second;
            char ch = st.top().first;
            st.pop();
            res = string(cnt, ch) + res;
        }
        return res;
    }
};