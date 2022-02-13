class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        int loop = 1 << n;
        vector<vector<int>> res;
        
        for(int row = 0; row < loop; row++){
            vector<int> ans;
            for(int idx = 0; idx < n; idx++){
                if(row & (1 << (n - 1 - idx)))
                {
                    ans.push_back(nums[idx]);
                }
            }
            res.push_back(ans);
            ans.erase(ans.begin(), ans.end());
        }
        return res;
    }
};