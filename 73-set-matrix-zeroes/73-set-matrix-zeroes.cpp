class Solution
{
    public:
        void setZeroes(vector<vector < int>> &matrix)
        {
            int r = matrix.size(), c = matrix[0].size();
            vector<int> idx;
            for (int i = 0; i < r; i++)
            {
                for (int j = 0; j < c; j++)
                {
                    if (matrix[i][j] == 0)
                    {
                        idx.push_back(i);
                        idx.push_back(j);
                    }
                }
            }
            int n = idx.size();
           	//row const col variable
            for (int i = 0; i < n; i += 2)
            {
                for (int j = 0; j < c; j++)
                {
                    matrix[idx[i]][j] = 0;
                }
            }
           	//row const col variable
            for (int i = 1; i < n; i += 2)
            {
                for (int j = 0; j < r; j++)
                {
                    matrix[j][idx[i]] = 0;
                }
            }
        }
};