class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>> st;
        int i = 0, n = s.size();
        for(i = 0; i < n; i++){
            int temp;
            if(st.empty() || st.top().first != s[i]){
                st.push({s[i], 1});
            }else{
                temp = st.top().second + 1;
                st.pop();
                st.push({s[i], temp});
            }
            if(st.top().second >= k){
                temp -= k;
                st.pop();
                if(temp){
                    st.push({s[i], temp});
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