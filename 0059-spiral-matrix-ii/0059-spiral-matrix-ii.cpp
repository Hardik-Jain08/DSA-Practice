class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int k = n*n, c = 1, rs = 0, re = n - 1, cs = 0, ce = n - 1;
        vector<vector<int>> ans(n, vector<int> (n,0));
        while(c <= k) {
            for(int i = cs; i <= ce; i++)
                ans[rs][i] = c++;
            rs++;
            for(int i = rs; i <= re; i++)
                ans[i][ce] = c++;
            ce--;
            for(int i = ce; i >= cs; i--)
                ans[re][i] = c++;
            re--;
            for(int i = re; i >= rs; i--)
                ans[i][cs] = c++;
            cs++;
        }
        return ans;
    }
};