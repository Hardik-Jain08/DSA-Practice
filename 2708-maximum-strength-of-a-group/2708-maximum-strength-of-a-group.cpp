class Solution {
public:
    long long maxStrength(vector<int>& nums) {
        long long prod = 1;
        int negMn = INT_MIN, mx = INT_MIN, neg = 0;
        for(auto &x: nums) {
            if(x) prod *= x;
            if(x < 0){
                negMn = max(negMn, x);
                neg++;
            }
            mx = max(mx, x);
        }
        if(mx == 0 && neg < 2) return 0;
        if(mx < 0 && neg == 1) return negMn;
        if(prod > 0) return prod;
        return prod / negMn;
    }
};