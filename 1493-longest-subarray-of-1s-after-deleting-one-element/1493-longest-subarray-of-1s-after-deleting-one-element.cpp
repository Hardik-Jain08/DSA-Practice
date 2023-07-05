class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int i = 0, j = 0, zero = 0, win = 0;
        if(nums == vector<int>(n, 0))
            return 0;
        while(j < n) {
            while(j < n && zero < 2) {
                if(!nums[j])
                    zero++;
                j++;
            }
            win = max(j-i-2, win);
            while(i < j && zero > 1) {
                if(!nums[i++])
                    zero--;
            }
        }
        win = max(j-i-1, win);
        return win;
    }
};