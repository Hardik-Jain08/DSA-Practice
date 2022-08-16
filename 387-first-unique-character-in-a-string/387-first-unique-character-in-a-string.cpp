class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> hash(26,0);
        for(auto &ch : s){
            hash[ch - 'a']++;
        }
        for(int idx = 0; idx < s.size(); idx++){
            if(hash[s[idx] - 'a'] == 1){
                return  idx;
            }
        }
        return -1;
    }
};