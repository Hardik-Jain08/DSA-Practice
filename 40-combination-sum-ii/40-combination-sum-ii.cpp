class Solution {
public:
    void rec(vector<int>& c, vector<vector<int>>& res, vector<int> ans, int target, int idx){
        if(idx == c.size()){
            if(target == 0){
                res.push_back(ans);
            }
            return;
        }
        if(target < 0) return;
        if(ans.empty() || ans.back() != c[idx])
            rec(c, res, ans, target, idx+1);
        ans.push_back(c[idx]);
        rec(c, res, ans, target - c[idx], idx + 1);
    }
    vector<vector<int>> combinationSum2(vector<int>& c, int target) {
        vector<vector<int>> res;
        sort(c.begin(), c.end());
        rec(c, res, {}, target, 0);
        return res;
    }
};