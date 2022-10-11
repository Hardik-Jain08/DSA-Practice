class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        if(nums.size() < 3) return false;
        vector<int> arr;
        arr.push_back(nums[0]);
        for(int idx = 1; idx < nums.size(); idx++){
            if(nums[idx] > arr.back()){
                arr.push_back(nums[idx]);
            }else{
                int i = lower_bound(arr.begin(), arr.end(), nums[idx]) - arr.begin();
                arr[i] = nums[idx];
            }
            if(arr.size() >= 3) return true;
        }
        return false;
    }
};