class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r = matrix.size(), c = matrix[0].size();
        int s = 0, e = (r * c) - 1, m;
        while(s <= e){
            m = s + (e - s) / 2;
            if(matrix[m / c][m % c] > target){
                e = m - 1;
            } 
            else if(matrix[m / c][m % c] < target){
                s = m + 1;
            }else{
                return true;
            }
        }
        return false;
    }
};