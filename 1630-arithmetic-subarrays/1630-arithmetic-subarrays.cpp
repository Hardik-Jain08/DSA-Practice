class Solution {
public:
    bool check(vector<int> nums, int i, int j){
        sort(nums.begin() + i, nums.begin() + j + 1);
        
        int cd = nums[i+1] - nums[i];
        for(int idx = i; idx < j; idx++){
            if(nums[idx + 1] - nums[idx] != cd) return false;
        }
        return true;
    }
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> ans;
        int m = l.size();
        for(int i = 0; i < m; i++){
            ans.push_back(check(nums, l[i], r[i]));
        }
        return ans;
    }
};