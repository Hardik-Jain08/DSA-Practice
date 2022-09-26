class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char, int>> st;
        for(int i = 0; i < s.size(); i++){
            if(st.empty() || st.top().first != s[i]){
                st.push({s[i], 1});
            }else {
                st.top().second++;
            }
            if(!st.empty() && st.top().second >= k){
                st.top().second -= k;;
                if(st.top().second == 0) st.pop();
            }
        }
        string ans = "";
        while(!st.empty()){
            int t = st.top().second;
            ans = string(t, st.top().first) + ans;
            st.pop();
        }
        return ans;
    }
};