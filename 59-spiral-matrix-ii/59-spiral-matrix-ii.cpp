class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int r1 = 0, r2 = n-1, c1 = 0, c2 = n-1;
        vector<vector<int>> ans(n,vector<int>(n));
        int i = 0, j = 0, k = 0;
        while(r1 <= r2 && c1 <= c2){
            for(int i=c1;i<=c2;i++)//left to right move,row is fixed
            ans[r1][i] = ++k;
       
            for(int i=r1+1;i<=r2;i++) //top to bootom move ,colomn is fixed
            ans[i][c2] = ++k;
       
            for(int i=c2-1;i>=c1;i--) // right to left move,row is fixed
            ans[r2][i] = ++k;
        
            for(int i=r2-1;i>r1;i--) // bottom to up move ,colomn is fixed
            ans[i][c1] = ++k;
            
            r1++;
            c1++;
            r2--;
            c2--;
        }
       return ans;
    }
};