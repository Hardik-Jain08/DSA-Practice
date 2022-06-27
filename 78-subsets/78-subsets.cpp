class Solution {
public:
    void helper(vector<int> arr, vector<vector<int>> &ans, int idx, vector<int> set){
        if(idx == arr.size()){
            ans.push_back(set);
            return;
        }
        helper(arr, ans, idx+1, set);
        set.push_back(arr[idx]);
        helper(arr, ans, idx+1, set);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        helper(nums, ans, 0, {});
        return ans;
    }
};