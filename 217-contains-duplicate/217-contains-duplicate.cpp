class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        unordered_map<int,int> freq;
        for(int i = 0; i < n; i++){
            freq[nums[i]]++;
        }
        for(auto &x: freq){
            if(freq[x.first] > 1) return true;
        }
        return false;
    }
};