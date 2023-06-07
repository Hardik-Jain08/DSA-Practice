class Solution {
public:
    int minFlips(int a, int b, int c) {
        int mask = 1, ans = 0, t;
        for(int i = 0; i < 31; i++) {
            t = (mask << i);
            if(c & t) {
                if(!(a & t) && !(b & t))
                    ans++;
            } else {
                if((a & t) && (b & t)) {
                    ans += 2;
                } else if((a & t) || (b & t)) {
                    ans++;
                }
            }
        }
        return ans;
    }
};