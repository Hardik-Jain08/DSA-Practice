class Solution {
public:
    int search(vector<int>& nums, int i, int target){
        int s = i, e = nums.size() - 1, m;
        while(s <= e){
            m = s + (e - s) / 2;
            if(nums[m] == target) return m;
            else if(nums[m] < target){
                s = m + 1;
            }else{
                e = m - 1;
            }
        }
        return -1;
    }
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for(int i = 0; i < n; i++){
            int idx = search(nums, i + 1, target - nums[i]);
            if(idx != -1) return {i + 1,idx + 1};
        }
        return {-1,-1};
    }
};