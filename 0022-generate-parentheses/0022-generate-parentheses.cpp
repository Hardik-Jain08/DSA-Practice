class Solution {
public:
    void helper(int l, int r, int n, string s, vector<string>& ans) {
        if(s.size() == n*2) {
            ans.push_back(s);
            return;
        }
        if(l < n)
            helper(l + 1, r, n, s+'(', ans);
        if(l > r)
            helper(l, r + 1, n, s+')', ans);
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        helper(0,0,n,"", ans);
        return ans;
    }
};