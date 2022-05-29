class Solution {
public:
    bool check(bitset<26> first, bitset<26> second){
        for(int i = 0; i < 26; i++){
            if(first[i] && second[i]) return 1;
        }
        return 0;
    }
    int maxProduct(vector<string>& words) {
        int n = words.size(), ans = 0;
        vector<bitset<26>> letters(n);
        for(int i = 0; i < n; i++){
            for(int k = 0; k < words[i].size(); k++){
                letters[i][words[i][k] - 'a'] = 1;
            }
            for(int j = 0; j < i; j++){
                if(!check(letters[i], letters[j])){
                    ans = max(ans, (int)words[i].size() * (int)words[j].size());
                }
            }
        }
        return ans;
    }
};