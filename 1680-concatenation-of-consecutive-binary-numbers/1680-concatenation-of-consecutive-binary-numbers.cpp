class Solution {
public:
    int concatenatedBinary(int n) {
        long m = 1e9+7, ans = 0, len;
        for(int i = 1; i <= n; i++){
            len  = int(log2(i) + 1);
            ans = ((ans << (len) % m) + i) % m;
        }
        return ans;
    }
};