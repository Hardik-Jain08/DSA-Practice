class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char, int>> st;
        for(int i = 0; i < s.size(); i++){
            if(st.empty() || st.top().first!=s[i])
            {
                st.push({s[i],1});                
            }
            else if(st.top().first==s[i])
            {
                if(st.top().second < k-1)
                {
                    st.top().second++;
                }
                else
                {
                    st.pop();
                }
                
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