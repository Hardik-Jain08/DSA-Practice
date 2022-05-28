class Solution {
public:
    int minMoves(vector<int>& nums) {
        long sum = nums[0];
        int mn = nums[0];
        int n = nums.size();
        for(int i = 1; i < n; i++){
            mn = min(mn, nums[i]);
            sum += nums[i];
        }
        return (int)sum - n * mn;
    }
};