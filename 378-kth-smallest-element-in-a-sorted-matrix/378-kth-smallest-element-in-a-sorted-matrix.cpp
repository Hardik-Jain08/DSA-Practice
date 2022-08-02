class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int z) {
        int n = matrix.size(), k = 0;
        vector<int> temp(n*n);
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                temp[k++] = matrix[i][j];
            }
        }
        sort(temp.begin(), temp.end());
        return temp[z-1];
    }
};