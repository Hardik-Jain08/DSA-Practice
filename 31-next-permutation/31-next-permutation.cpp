class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int i = n - 2, j = n - 1;
        //finding a strictly dec section (S.D.S)
        while(i >= 0 && (nums[i] >= nums[i+1])) i--;
        // 6 2 1 (5 4 3 0)
        
        // 6 2 (1) 5 4 3 0 we got the element which is just before (S.D.S)
        if(i < 0){ // incase the whole array is in last permutation
                  //reverse it to get first permutation
            reverse(nums.begin(), nums.end());
        }else{
            while(j > i && nums[j] <= nums[i]){
                j--;
            }
            
            swap(nums[i], nums[j]);
            // after swap
            // 6 2 (3) 5 4 (1) 0
            reverse(nums.begin() + i + 1, nums.end());
            // 6 2 3 0 1
        }
    }
};