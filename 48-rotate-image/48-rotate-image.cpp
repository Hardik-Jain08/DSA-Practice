class Solution {
public:
    void rotate(vector<vector<int>>& mat) {
        int n = mat.size(), d = 0, i = 0, j = 0;
        // Transpose
        while(d != n-1){
            i++;
            if(i == n || j == n){
                d++;
                i = j = d;
            }
            swap(mat[i][j], mat[j][i]);
        }
        for(int i = 0; i < n; i++) reverse(mat[i].begin(), mat[i].end());
    }
};