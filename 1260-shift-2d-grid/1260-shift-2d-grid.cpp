// class Solution {
// public:
//     vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
//         int m = grid.size(), n = grid[0].size();
//         int idx = m * n;
//         k = k % idx;
//         int i = 0, j = k;
//         if(k == 0) return grid;
//         while(i < idx){
//             if(j == idx) j = j % idx;
//             swap(grid[i / n][i % n], grid[j / n][j % n]);
//             i++, j++;
//         }
//         return grid;
//     }
// };
class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        const int m = grid.size();
        const int n = grid[0].size();
        vector<vector<int>> ans(m, vector<int>(n, 0));
        for (int i = 0; i < m * n; ++i) {
            int ori_y = i / n;
            int ori_x = i % n;
            int new_y = (ori_y + (ori_x + k) / n) % m;
            int new_x = (ori_x + k) % n;
            
            ans[new_y][new_x] = grid[ori_y][ori_x];
        }
        return ans;
    }
};