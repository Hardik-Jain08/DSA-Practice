class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;
        int r, c, lower_col = 0, lower_row = 0, max_col = matrix[0].size() - 1, max_row = matrix.size() - 1, counter = 0, e = (max_row + 1) * (max_col + 1);
  while(counter < e)
  {
    //top wall
    for(r = lower_row, c = lower_col; (c <= max_col) && (counter < e); c++)
    {
      res.push_back(matrix[r][c]);
      counter++;
    }
    lower_row++;
    //right wall
    for(r = lower_row, c = max_col; (r <= max_row) && (counter < e); r++)
    {
      res.push_back(matrix[r][c]);
      counter++;
    }
    max_col--;
    
    //bottom wall
    for(r = max_row, c = max_col; (c >= lower_col) && (counter < e); c--)
    {
      res.push_back(matrix[r][c]);
      counter++;
    }
    max_row--;
    
    //left wall
    for(r = max_row, c = lower_col; (r >= lower_row) && (counter < e); r--)
    {
      res.push_back(matrix[r][c]);
      counter++;
    }
    lower_col++;
    }
        return res;
    }
};