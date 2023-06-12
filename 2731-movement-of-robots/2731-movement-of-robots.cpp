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
        vector<ll> pf(n,0);
        pf[0] = nums[0];
        for(int i = 1; i < n; i++) {
            pf[i] = pf[i-1] + nums[i];
        }
        ll ans = 0;
        for(ll i = 1; i < n; i++) {
            ll t = (M+ i*nums[i] - pf[i-1])%M;
            ans = (ans + t)%M;
        }
        return (int)ans;
    }
};