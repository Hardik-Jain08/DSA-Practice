class Solution {
public:
    int minCost(string colors, vector<int>& nt) {
        int n = colors.size(), ans = 0, i = 0, j = 0;
        while(j < n){
            int mx = 0;
            int sm = 0;
            while(colors[i] == colors[j]){
                mx = max(mx, nt[j]);
                sm += nt[j];
                j++;
            }
            i = j;
            ans += (sm - mx);
        }
        return ans;
    }
};