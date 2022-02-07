class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int> r(26,0);
        for(const char c : s) ++r[c - 'a'];
        for(const char c : t) {
            if(r[c - 'a'] == 0){
                return c;
            }else{
                --r[c - 'a'];
            }
        }
        for(int i = 0; i < 26; i++) {
            if(r[i] != 0){
                return i + 'a';
            }
        }
        return ' ';
    }
};