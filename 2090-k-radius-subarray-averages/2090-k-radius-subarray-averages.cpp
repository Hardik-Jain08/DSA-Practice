class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n = nums.size(), j = 2*k+1;
        long long window = 0;
        vector<int> avgs(n,-1);
        if(n < j) {
            return avgs;
        }
        for(int i = 0; i < j-1; i++) {
            window += nums[i];
        }
        
        for(int i = k; i < n-k; i++) {
            if(i - 1 >= k) {
                window -= nums[i-1-k];
            }
            if(i+k < n) {
                window += nums[i+k];
            }
            avgs[i] = window/j;
        }
        return avgs;
    }
};