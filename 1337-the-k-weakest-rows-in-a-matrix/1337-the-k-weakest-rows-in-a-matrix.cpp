class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int n = mat.size(), m = mat[0].size();
        for(int i = 0; i < n; i++){
            mat[i].push_back(i);
        }
        sort(mat.begin(),mat.end());
        vector<int> ans(k,0);
        for(int i = 0; i < k; i++){
            ans[i] = mat[i][m];
        }
        return ans;
    }
};