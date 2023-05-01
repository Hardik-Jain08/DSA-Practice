class Solution {
public:
    double average(vector<int>& salary) {
        int ans = 0, mx = 0, mn = 1e6;
        for(int i = 0; i < salary.size(); i++) {
            mx = max(mx, salary[i]);
            mn = min(mn, salary[i]);
            ans += salary[i];
        }
        return (ans - mx - mn) / double(salary.size() - 2);
    }
};