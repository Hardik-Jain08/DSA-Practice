class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int n = nums.size();
        int i = 0, j = 0, sum = 0, ans = 0;
        bool map[10001]{false};
        while(j < n){
            while(map[nums[j]]){
                sum -= nums[i], map[nums[i++]] = false;
            }
            sum += nums[j], map[nums[j++]] = true;
            ans = max(ans, sum);
        }
        return ans;
    }
};