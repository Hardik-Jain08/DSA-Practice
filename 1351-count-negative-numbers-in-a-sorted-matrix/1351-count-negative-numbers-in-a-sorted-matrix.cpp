class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        int i = 0, j = n-1, count = 0;
        while(i < grid.size()) {
            while(j >= 0 && grid[i][j] < 0) j--;
            count += n-1-j;
            i++;
        }
        return count;
    }
};