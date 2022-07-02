class Solution {
public:
    int maxArea(int h, int w, vector<int>& hc, vector<int>& vc) {
        sort(hc.begin(), hc.end());
        sort(vc.begin(), vc.end());
        // maximum horizontal cut and maximum vertical cut and one integer ko keep track of just the previous element
        long long mhc = 0, vhc = 0, prev = 0;
        for(auto &x: hc){
            mhc = max(mhc, x - prev);
            prev = x;
        }
        mhc = max(mhc, h - prev);
        
        prev = 0;
        for(auto &x: vc){
            vhc = max(vhc, x - prev);
            prev = x;
        }
        vhc = max(vhc, w - prev);
        int mod = 1e9 + 7;
        return mhc*vhc % mod;
    }
};