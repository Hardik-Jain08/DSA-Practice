class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int msf = nums[0];
        int csum = nums[0];
        int n = nums.size();
        for(int i = 1; i < n; i++){
            csum = max(nums[i], nums[i] + csum);
            msf = max(msf,csum);
        }
        return msf;
    }
};