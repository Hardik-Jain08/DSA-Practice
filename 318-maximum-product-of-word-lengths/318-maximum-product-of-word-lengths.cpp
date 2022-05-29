class Solution {
public:
    int maxProduct(vector<string>& words) {
        int n = words.size(), ans = 0;
        vector<int> letters(n);
        for(int i = 0; i < n; i++){
            for(int k = 0; k < words[i].size(); k++){
                letters[i] |= (1 << (words[i][k] - 'a'));
            }
            for(int j = 0; j < i; j++){
                if((letters[i] & letters[j]) == 0){
                    ans = max(ans, (int)words[i].size() * (int)words[j].size());
                }
            }
        }
        return ans;
    }
};