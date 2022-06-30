class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int ans = 0, n = nums.size();
        sort(nums.begin(), nums.end());
        int mid = nums[n/2];
        for(int idx = 0; idx < n; idx++){
            ans += abs(nums[idx] - mid);
        }
        return ans;
    }
};