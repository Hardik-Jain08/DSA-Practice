class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(), costs.end());
        int ans = 0, i = 0, n = costs.size();
        while(i < n && coins > 0){
            coins -= costs[i++];
            if(coins >= 0) ans++;
        }
        return ans;
    }
};