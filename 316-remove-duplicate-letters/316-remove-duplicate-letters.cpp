class Solution {
public:
    string removeDuplicateLetters(string s) {
        int n = s.size();
        vector<int> lidx(26,-1);
        for(int i = 0; i < n; i++){
            lidx[s[i] - 'a'] = i;
        }
        stack<int> st;
        vector<bool> seen(26,0);
        for (int i = 0; i < n; i++) {
            int curr = s[i] - 'a';
            if (seen[curr]) continue;
            while(!st.empty() && st.top() > s[i] && i < lidx[st.top() - 'a']){
                seen[st.top() - 'a'] = 0;
                st.pop();
            }
            st.push(s[i]);
            seen[curr] = 1;
        }
        
        string ans = "";
        while (!st.empty()){
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};