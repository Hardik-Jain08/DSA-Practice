class Solution {
public:
    int isPalindrome(string s, int i, int j){
        int n = s.size();
        int ans = 0;
        while(i >= 0 && j < n && (s[i] == s[j])){
            ans++;
            i--,j++;
        }
        return ans;
    }
    int countSubstrings(string s) {
        int n = s.size() - 1;
        int i = 0, ans = 0;
        while(i <= n){
            ans += isPalindrome(s,i,i);
            ans += isPalindrome(s,i,i+1);
            i++;
        }
        return ans;
    }
};