class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int n = nums.size(), ans = 1;
        int prev = 0, curr;
        for(int i = 1; i < n; i++){
            curr = nums[i] - nums[i-1];
            if((curr > 0 && prev <= 0) || (curr < 0 && prev >= 0)){
                ans++;
                prev = curr;
            }
        }
        return ans;
    }
};