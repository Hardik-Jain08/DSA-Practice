class Solution {
public:
    int pivot(vector<int>& nums){
        int s = 0, e = nums.size() - 1,m;
        while(s <= e){
            m = s + (e - s) / 2;
            if(m < e && nums[m] > nums[m + 1]){
                return m;
            }
            if(m > s && nums[m] < nums[m - 1]){
                return m - 1;
            }
            if(nums[s] >= nums[m]){
                e = m - 1;
            }else {
                s = m + 1;
            }
        }
        return s;
    }
    int se(vector<int>& nums,int s, int e, int target) {
        int left = s, right = e, mid;
        while(left <= right){
            mid = left + (right - left) / 2;
            if(nums[mid] == target) return mid;
            else if(nums[mid] < target) left = mid + 1;
            else right = mid - 1;
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int p = pivot(nums);
        int ans = se(nums, 0, p, target);
        if(ans == -1) ans = se(nums, p + 1, nums.size() - 1, target);
        return ans;
    }
};