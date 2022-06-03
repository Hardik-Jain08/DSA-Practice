class NumMatrix
{
    public:
        vector<vector < int>> pf;
    int row = 0, col = 0;
    NumMatrix(vector<vector < int>> &matrix)
    {
        row = matrix.size();
        col = matrix[0].size();
        vector<vector < int>> prefix(row + 1, vector<int> (col + 1, 0));
        pf = prefix;
        for (int r = 0; r < matrix.size(); r++)
        {
            for (int c = 0; c < matrix[0].size(); c++)
            {
                pf[r + 1][c + 1] = matrix[r][c] + pf[r][c + 1] + pf[r + 1][c] - pf[r][c];
                // cout << pf[r+ 1][c+1] <<" ";
            }
            // cout << endl;
        }
    }

    int sumRegion(int r1, int c1, int r2, int c2)
    {
        return pf[r2 + 1][c2 + 1] - pf[r2 + 1] [c1] - pf[r1] [c2 + 1] + pf[r1][c1];
    }
};

/**
 *Your NumMatrix object will be instantiated and called as such:
 *NumMatrix* obj = new NumMatrix(matrix);
 *int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */