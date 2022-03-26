class Solution {
public:
    bool blackbox(int target,vector<int>& nums,int k){
        int n = nums.size();
        int sum = 0;
        for(int i = 0; i < k; i++){
            sum += nums[i];
        }
        int maxi = sum;
        int r = k, l = 0; // either comment what your variable means or use longer variables
        while(r < n){
            sum -= nums[l++];
            sum += nums[r++];
           maxi = max(sum, maxi);
        }
        return maxi >= target;
    }
    
    int search(int lo, int hi, int target, vector<int>& nums){
        int mid;
        int temp = 0;
        while(lo <= hi){
            mid = lo + (hi - lo) / 2;
            if(blackbox(target, nums, mid)){
                temp = mid;
                hi = mid - 1;
            }else{
                lo = mid + 1;
            }
        }
        return temp;
    }
    int minSubArrayLen(int target, vector<int>& nums) {
        int ans = search(1, nums.size(), target, nums);
        return ans;
    }
};
// use spaces between operators :|
// condition is <=, you used only < in while loop
// don't use (low + high)/2
// you can remove "== true" as, if condition will only execute when function returns true
// bool ans=false; (not required)
// ans = true (not req)
//if(ans==true)    return low; (not req)