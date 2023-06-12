typedef long long int ll;
const ll M = 1e9+7;
class Solution {
public:
    int sumDistance(vector<int>& nums, string s, int d) {
        int n = nums.size();
        for(int i = 0; i < n; i++) {
            nums[i] += (s[i] == 'L') ? -d : d;
        }
        sort(nums.begin(), nums.end());
        ll ans = 0, pf = nums[0];
        for(ll i = 1; i < n; i++) {
            ans += i*nums[i] - pf;
            ans %= M;
            pf += nums[i];
        }
        return (int)ans;
    }
};