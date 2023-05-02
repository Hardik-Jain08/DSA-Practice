class Solution {
public:
    int res(vector<int>& arr, int i, int x) {
        if(i == arr.size()) {
            return x;
        }
        if(arr[i] == 0) return 0;               
        return res(arr, i+1, x)*(arr[i]/abs(arr[i]));
    }
    int arraySign(vector<int>& nums) {
        return res(nums, 0, 1);
    }
};