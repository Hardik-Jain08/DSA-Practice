class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int n = mat.size(), m = mat[0].size();
        vector<pair<int,int>> vec(n);
        for(int i = 0; i < n; i++){
            int j = 0, strength = 0;
            while(j < m && mat[i][j++] == 1) strength++;
            vec[i] = make_pair(strength,i);
        }
        sort(vec.begin(),vec.end());
        vector<int> ans(k,0);
        for(int i = 0; i < k; i++){
            ans[i] = vec[i].second;
        }
        return ans;
    }
};