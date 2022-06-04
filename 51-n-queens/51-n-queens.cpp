class Solution {
public:
    bool isQueenSafe(vector<string> chess, int row, int col){
        for(int r = row - 1, c = col; r >= 0; r--){
            if(chess[r][c] == 'Q') return false;
        }
        for(int r = row - 1, c = col - 1; r >= 0 && c >= 0; r--, c--){
            if(chess[r][c] == 'Q') return false;
        }
        for(int r = row - 1, c = col + 1; r >= 0 && c < chess.size(); r--, c++){
            if(chess[r][c] == 'Q') return false;
        }
        return true;
    }
    void nqueens(vector<vector<string>>& res, vector<string>& chess, int row) {
        if(row == chess.size()){
            res.push_back(chess);
        }
        for(int col = 0; col < chess.size(); col++){
            if(isQueenSafe(chess, row, col)){
                chess[row][col] = 'Q';
                nqueens(res, chess, row + 1);
                chess[row][col] = '.';
             }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string> chess(n,string(n,'.'));
        vector<vector<string>> res;
        nqueens(res, chess, 0);
        return res;
    }
};