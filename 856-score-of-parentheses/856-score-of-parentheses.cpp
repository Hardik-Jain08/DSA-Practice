class Solution {
public:
    int scoreOfParentheses(string s) {
        int ans = 0, n = s.size();
        stack<int> st;
        for(auto &ch : s){
            if(ch == '('){
                st.push(ans);
                ans = 0;
            }else{
                ans = st.top() + max(1, 2 * ans);
                st.pop();
            }
        }
        return ans;
    }
};