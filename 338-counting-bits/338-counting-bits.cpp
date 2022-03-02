class Solution {
public:
    int cnt(int n, vector<int>& memo){
        if(n == 1) return 1;
        if(n == 0) return 0;
        if(memo[n] != 0) return memo[n];
        if(n % 2 == 0) return memo[n] = cnt(n/2,memo);
        else return memo[n] = 1 + cnt(n/2,memo);
    }
    vector<int> countBits(int n) {
        vector<int> ans(n+1,0);
        for(int i = 0; i <= n; i++){
            ans[i] = cnt(i,ans);
        }
        return ans;
    }
};