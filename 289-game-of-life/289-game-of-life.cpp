class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        vector<vector<int>> temp = board;
        
        int m = board.size(), n = board[0].size();
        for(int i = 0; i < m; i++){
            for(int j = 0;j < n; j++){
                int count0 = 0, count1 = 0;
                if(i-1 >= 0 && j-1 >= 0)
                    board[i-1][j-1] == 0 ? count0++ : count1++;
                if(i-1 >= 0)
                    board[i-1][j] == 0 ? count0++ : count1++;
                if(i-1 >= 0 && j+1 < n)
                    board[i-1][j+1] == 0 ? count0++ : count1++;
                if(j-1 >= 0)
                    board[i][j-1] == 0 ? count0++ : count1++;
                if(j+1 < n)
                    board[i][j+1] == 0 ? count0++ : count1++;
                if(i+1 < m && j-1 >= 0)
                    board[i+1][j-1] == 0 ? count0++ : count1++;
                if(i+1 < m)
                    board[i+1][j] == 0 ? count0++ : count1++;
                if(i+1 < m && j+1 < n)
                    board[i+1][j+1] == 0 ? count0++ : count1++;
                
                if(board[i][j] == 0){
                    if(count1 == 3) temp[i][j] = 1;
                } else{
                    if(count1 < 2) temp[i][j] = 0;
                    else if(count1 > 3) temp[i][j] = 0;
                }
            }
        }
        board = temp;
    }
};