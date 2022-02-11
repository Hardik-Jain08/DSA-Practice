class Solution {
    public int subarraySum(int[] nums, int k) {
        int res = 0, n = nums.length, sum = 0;
        for(int i = 0; i < n; i++){
            sum = 0;
            for(int j = i; j < n; j++){
                sum += nums[j];
                if(sum == k){
                    res++;
                }
            }
        }
        return res;
    }
}