class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int> ans(nums.size());
        int sum = 0; 
        for(auto x: nums) if((x&1) == 0) sum += x;
        for(int i = 0; i < queries.size(); i++){
            int temp = nums[queries[i][1]];
            nums[queries[i][1]] += queries[i][0];
            if((nums[queries[i][1]] & 1) == 0){
                if((temp & 1) == 0){
                    sum += queries[i][0];
                    ans[i] = sum;
                }else{
                    sum += nums[queries[i][1]];
                    ans[i] = sum;
                }
            }else{
                if((temp & 1) == 0){
                    sum -= temp;
                    ans[i] = sum;
                }else{
                    ans[i] = sum;
                }
            }
        }
        return ans;
        
    }
};