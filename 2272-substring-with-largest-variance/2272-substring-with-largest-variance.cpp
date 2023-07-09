class Solution {
public:
    int largestVariance(string s) {
        unordered_map<char, int> f;
        for(auto &ch: s) 
            f[ch]++;
        int ans = 0;
        for(char ch1 = 'a'; ch1 <= 'z'; ch1++) {
            for(char ch2 = 'a'; ch2 <= 'z'; ch2++) {
                if(ch1 == ch2 || !f[ch1] || !f[ch2]) 
                    continue;
                
                for(int t = 1; t <= 2; t++) {
                    int c1 = 0, c2 = 0;
                    for(int i = 0; i < s.size(); i++) {
                        if(s[i] == ch1)
                            c1++;
                        else if(s[i] == ch2)
                            c2++;
                        if(c1 < c2) {
                            c1 = 0, c2 = 0;
                        }
                        if(c1 > 0 && c2 > 0) {
                            ans = max(ans, c1 - c2);
                        }
                    }
                    reverse(s.begin(), s.end());
                }
            }
        }
        return ans;
    }
};