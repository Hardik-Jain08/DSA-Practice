class Solution {
public:
    int titleToNumber(string c) {
        int n = c.size() - 1;
        long long int res = 0;
        long long int p = 1;
        for(int i = n; i >= 0; i--){
            res += (p * (c[i] - '@'));
            p *= 26;
        }
        return res;
    }
};