class Solution {
public:
    int findMin(vector<int>& nums) {
        int s = 0, e = nums.size() - 1, m;
        if(nums[0] < nums[e]) return nums[0];
        while(s < e){
            m = s + (e - s) / 2;
            if(nums[m] > nums[e]){
                s = m + 1;
            }else if(nums[m] < nums[e]){
                e = m;
            }else{
                e--;
            }
        }
        return nums[s];
    }
};