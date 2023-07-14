class Solution {
public:
    int longestSubsequence(vector<int>& arr, int d) {
        unordered_map<int,int> mp;
        int ans = 1;
        for(auto &x: arr) {
            ans = max(ans, mp[x] = 1 + mp[x-d]);
        }
        return ans;
    }
};