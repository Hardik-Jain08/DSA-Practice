class Solution {
public:
    string stoneGameIII(vector<int>& arr) {
        int n = arr.size();
        vector<int> dp(n + 1, 0);
        dp[n] = 0;
        for(int i = n-1; i >= 0; i--) {
            int ans = INT_MIN;
            ans = max(ans, arr[i] - dp[i+1]); 
            if(i + 1 < arr.size()) ans = max(ans, arr[i] + arr[i+1] - dp[i+2]); 
            if(i + 2 < arr.size()) ans = max(ans, arr[i] + arr[i+1] + arr[i+2] - dp[i+3]);    
            dp[i] = ans;
        }
        int ans = dp[0];
        if(ans > 0) return "Alice";
        if(ans == 0) return "Tie";
        return "Bob";
    }
};