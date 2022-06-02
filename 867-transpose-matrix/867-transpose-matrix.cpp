class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        vector<vector<int>> ans(matrix[0].size(), vector<int> (matrix.size(), 0));
        for(int row = 0; row < matrix[0].size(); row++){
            for(int col = 0; col < matrix.size(); col++){
                ans[row][col] = matrix[col][row];
            }
        }
        return ans;
    }
};