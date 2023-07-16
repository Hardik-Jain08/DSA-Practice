class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {
        int ans = 0;
        map<int, int> mp;
        for(auto &x: nums) {
            ++mp[x-k];
            --mp[x+k+1];
        }
        int curr = 0;
        for(auto x: mp) {
            curr += x.second;
            ans = max(ans, curr);
        }
        return ans;
    }
};