class Solution {
public:
    void helper(vector<vector<int>>& ans, int idx, vector<int> bucket, vector<int>& nums) {
        if(idx >= nums.size()) {
            ans.push_back(bucket);
            return;
        }
        helper(ans, idx + 1, bucket, nums);
        bucket.push_back(nums[idx]);
        helper(ans, idx + 1, bucket, nums);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        helper(ans, 0, {}, nums);
        return ans;
    }
};