class Solution {
public:
    string longestPalindrome(string s) {
        int i, j, n = s.size();
        string res = "";
        for(int idx = 0; idx < n; idx++){
            i = idx, j = idx;
            while((i >= 0 && j < n) && s[i] == s[j]){
                if(j - i + 1 > res.size()){ // abbbba
                    res = s.substr(i, j - i + 1);
                }
                i--, j++;
            }
        }
        for(int idx = 0; idx < n; idx++){
            i = idx, j = idx + 1;
            while((i >= 0 && j < n) && s[i] == s[j]){
                if(j - i + 1 > res.size()){
                    res = s.substr(i, j - i + 1);
                }
                i--, j++;
            }
        }
        return res;
    }
};