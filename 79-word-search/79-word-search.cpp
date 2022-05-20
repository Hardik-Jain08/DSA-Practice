class Solution {
public:
    bool helper(vector<vector<char>>& board, string word ,int n, int sr, int sc){
        if(n == word.size()) return true;
        if(sr < 0 || sc < 0 || sr == board.size() || sc == board[0].size() || board[sr][sc] == '.' || board[sr][sc] != word[n]) return false;
        char temp = board[sr][sc];
        board[sr][sc] = '.';
        //top
        if(helper(board, word, n + 1, sr - 1, sc)) return true;
        //left
        if(helper(board, word, n + 1, sr, sc - 1)) return true;
        //down
        if(helper(board, word, n + 1, sr + 1, sc)) return true;
        // right
        if(helper(board, word, n + 1, sr, sc + 1)) return true;
        board[sr][sc] = temp;
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size();
        int n = board[0].size();
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(helper(board, word, 0, i, j)) return true;
            }
        }
        return false;
    }
};