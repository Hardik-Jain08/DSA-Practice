class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return {};
        int i = nums[0], j = i;
        vector<string> ans;
        for(int k = 0; k < n - 1; k++){
            if(nums[k + 1] == nums[k] + 1){
                j++;
            }else{
                if(i == j){
                    ans.push_back(to_string(j));
                }else{
                    string s = to_string(i) + "->" + to_string(j);
                    ans.push_back(s);
                }
                i = nums[k+1];
                j = i;
            }
        }
        if(i == j){
            ans.push_back(to_string(j));
        }else{
            string s = to_string(i) + "->" + to_string(j);
            ans.push_back(s);
            }
        return ans;
    }
};