class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int m = mat.size(), n = mat[0].size();
        int x, y;
        int cnt;
        vector<int> temp;
        // columns
        for(int i = 0; i < n; i++){
            x = 0, y = i;
            while(x < m && y < n){
                temp.emplace_back(mat[x++][y++]);
            }
            sort(temp.begin(), temp.end());
            x = 0, y = i, cnt = 0;
            while(x < m && y < n){
                mat[x++][y++] = temp[cnt++];
            }
            temp.erase(temp.begin(), temp.end());
        }
        // row
        for(int i = 1; i < m; i++){
            x = i, y = 0;
            while(x < m && y < n){
                temp.emplace_back(mat[x++][y++]);
            }
            sort(temp.begin(), temp.end());
            x = i, y = 0, cnt = 0;
            while(x < m && y < n){
                mat[x++][y++] = temp[cnt++];
            }
            temp.erase(temp.begin(), temp.end());
        }
        return mat;
    }
};