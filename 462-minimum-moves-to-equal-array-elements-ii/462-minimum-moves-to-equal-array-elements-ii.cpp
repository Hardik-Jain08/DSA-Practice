class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int ans = 0, n = nums.size(), h = n/2, k = n - 1;
        sort(nums.begin(), nums.end());
        for(int idx = 0; idx < h; idx++){
            ans += nums[k - idx] - nums[idx];
        }
        return ans;
    }
};