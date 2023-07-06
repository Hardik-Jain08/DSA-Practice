class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int win = INT_MAX, i = 0, j = 0;
        while(j < n) {
            target -= nums[j++];
            while(target < 1) {
                win = min(win, j-i);
                target += nums[i++];
            }                
        }
        return win == INT_MAX ? 0 : win;
    }
};