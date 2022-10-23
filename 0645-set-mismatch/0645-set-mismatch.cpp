class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> arr(nums.size()+1);
        for(int i = 0; i < nums.size(); i++){
            arr[nums[i]]++;
        }
        int duplicate = 0, missed = 0;
        for(int i = 1; i <= nums.size(); i++){
            if(arr[i] == 0){
                missed = i;
            }
            if(arr[i] == 2){
                duplicate = i;
            }
            if(missed != 0 && duplicate != 0) break;
        }
        return {duplicate,missed};
    }
};