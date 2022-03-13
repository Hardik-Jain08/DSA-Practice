class Solution {
public:
    int findMin(vector<int>& nums) {
        int s = 0, e = nums.size() - 1, m;
        // not rotated
        if(nums[e] >= nums[s]){
            return nums[0];
        }
        while(s <= e){
            m = s + (e - s) / 2;
            
            if(nums[m + 1] < nums[m])
                return nums[m + 1];
            if(m != 0 && nums[m - 1] > nums[m])
                return nums[m];
            //rotated first half of the array
            if(nums[m] <= nums[s])
                e = m - 1;
            else
                s = m + 1;
        }
        return nums[0];
    }
};