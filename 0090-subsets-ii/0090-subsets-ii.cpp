class Solution {
public:
    void helper(vector<int> &arr, vector<vector<int>> &ans, int idx, vector<int> sset){
        if(idx == arr.size()){
            ans.push_back(sset);
            return;
        }
        if(sset.empty() || sset.back() != arr[idx]){
            helper(arr, ans, idx+1, sset);
        }
        sset.push_back(arr[idx]);
        helper(arr, ans, idx+1, sset);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        helper(nums, ans, 0, {});
        return ans;
    }
};