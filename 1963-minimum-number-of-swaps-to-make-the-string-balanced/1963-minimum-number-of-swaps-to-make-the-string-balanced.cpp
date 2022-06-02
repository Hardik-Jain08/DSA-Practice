class Solution {
public:
    int minSwaps(string s) {
        int n = s.size(), ans = 0;
        int op = 0, cl = 0, opIdx = n - 1;
        for(int i = 0; i < n; i++){
            if(s[i] == '[') op++;
            else if(s[i] == ']') cl++;
            if(cl > op){
                while(s[opIdx] != '[') opIdx--;
                swap(s[i], s[opIdx]);
                op++,cl--;
                ans++;
            }
        }
        return ans;
    }
};