class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n = grid.size(), ans = 0;
        map<vector<int>, int> s;
        for(int i = 0; i < n; i++) {
            s[grid[i]]++;
        }
        vector<int> temp(n);
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                temp[j] = grid[j][i];
            }
            ans += s[temp];
        }
        return ans;
    }
};