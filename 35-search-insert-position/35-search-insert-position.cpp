class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int st = 0, en = nums.size() - 1, m;
        while(st <= en){
            m = st + (en - st) / 2;
            if(nums[m] > target){
                en = m - 1;
           }else if(nums[m] < target){
                st = m + 1;
            }else{
                return m;
            }
        }
        return st;
    }
};