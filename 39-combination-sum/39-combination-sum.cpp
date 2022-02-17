class Solution {
public:
    void rec(vector<int>& c, vector<vector<int>>& res, vector<int> ans, int target, int sum, int idx){
        if(sum == target){
            res.push_back(ans);
            return;
        }
        for(int i = idx; i < c.size(); i++){
            if(sum + c[i] <= target){
                ans.push_back(c[i]);
                rec(c, res, ans, target, sum + c[i], i);
                ans.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum(vector<int>& c, int target) {
        vector<vector<int>> res;
        vector<int> ans;
        rec(c, res, ans,target, 0, 0);
        return res;
    }
};