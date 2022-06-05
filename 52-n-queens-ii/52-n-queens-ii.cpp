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
    void nqueens(int& c, vector<string>& chess, int row) {
        if(row == chess.size()){
            c++;
        }
        for(int col = 0; col < chess.size(); col++){
            if(isQueenSafe(chess, row, col)){
                chess[row][col] = 'Q';
                nqueens(c, chess, row + 1);
                chess[row][col] = '.';
             }
        }
    }
    int totalNQueens(int n) {
        vector<string> chess(n,string(n,'.'));
        // vector<vector<string>> res;
        int c = 0;
        nqueens(c, chess, 0);
        return c;
    }
};