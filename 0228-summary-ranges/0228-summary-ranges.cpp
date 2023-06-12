class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int n = nums.size();
        if(!n) return {};
        vector<string> ans;
        int s = nums[0], count = 0;
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] == nums[i-1] + 1) {
                count++;
            }else {
                if(count){
                    ans.push_back(to_string(s)+"->"+to_string(s+count));
                } else {
                    ans.push_back(to_string(s));
                }
                count = 0;
                s = nums[i];
            }
        }
        if(count){
            ans.push_back(to_string(s)+"->"+to_string(s+count));
        } else {
            ans.push_back(to_string(s));
        }
        return ans;
    }
};