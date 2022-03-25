class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int tsum = 0;
        int n = costs.size();
        vector<int> diff(n,0);
        for(int i = 0; i < n; i++){
            tsum += costs[i][0];
            diff[i] = costs[i][1] - costs[i][0];
        }
        sort(diff.begin(), diff.end());
        n >>= 1;
        for(int i = 0; i < n; i++){
            tsum += diff[i];
        }
        return tsum;
    }
};