class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0, j = 0;
        int n = s.size(), n2 = t.size();
        while(i < n && j < n2){
            if(t[j] == s[i]){
                i++,j++;
            }else{
                j++;
            }
        }
        return i == n;
    }
};