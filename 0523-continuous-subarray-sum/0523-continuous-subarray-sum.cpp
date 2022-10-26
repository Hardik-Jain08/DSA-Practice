class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        mp.insert({0, -1});
        int pf = 0, n = nums.size();
        for(int i = 0; i < n; i++){
            pf = (nums[i] + pf) % k;
            mp.insert({pf, i});
            if(i - mp[pf] >= 2)
                return true;
        }
        return false;
    }
};