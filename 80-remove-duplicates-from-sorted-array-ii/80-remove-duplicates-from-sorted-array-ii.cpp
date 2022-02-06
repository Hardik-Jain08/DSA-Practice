class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if(n < 3) return n;
        vector<int> res;
        int i = 0,j = 1;
        while(j < n) {
            if(nums[j] == nums[j - 1]) {
                j++;
            }else{
                if(j - i >= 2) {
                    res.push_back(nums[j - 1]);
                }
                res.push_back(nums[j - 1]);
                i = j;
                j++;
            }
        }
        int c = 2;
        while(i < j && c){
            res.push_back(nums[i++]);
            c--;
        }
            
        for(int idx = 0; idx < res.size(); idx++) {
            nums[idx] = res[idx];
        }
        return res.size();
    }
};