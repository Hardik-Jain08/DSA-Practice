class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int i = 0, j = 0, k = n - 1;
        while(j <= k){
            switch (nums[j]) {
                case 0:
                    swap(nums[j++], nums[i++]);
                    break;
                case 2:
                    swap(nums[j], nums[k--]);
                    break;
                default:
                    j++;
                    break;
            }
        }
    }
};