class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int k = (n/3) + 1;
        if(n==1){
            return nums;
        }
        else if(n == 2)
            if(nums[0] != nums[1]) return nums;
        else  return {nums[0]};
        
        vector<int> ans;
        sort(nums.begin(), nums.end());
        int freq = 1;
        for(int i = 1; i < n; i++){
            if(nums[i] != nums[i-1]){
                freq = 1;
            }else{
                freq++;
                if(freq == k){
                    ans.push_back(nums[i]);
                }
            }
        }
        return ans;
    }
};