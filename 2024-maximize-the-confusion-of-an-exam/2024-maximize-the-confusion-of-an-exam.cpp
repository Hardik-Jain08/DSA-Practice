class Solution {
public:
    int mxWin(string s, int k, char ch) {
        int i = 0, j = 0, win = 0, n = s.size();
        while(j < n) {
            while(j < n && k > -1) {
                if(s[j++] != ch) {
                    k--;
                }
            }
            win = max(win, j-i-1);
            while(i <= j && k < 0) {
                if(s[i++] != ch) {
                    k++;
                }
            }
        }
        win = max(win, j-i);
        return win;
    }
    int maxConsecutiveAnswers(string s, int k) {
        return max(mxWin(s, k, 'T'), mxWin(s, k, 'F'));
    }
};