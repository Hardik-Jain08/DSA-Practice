/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int peakIndexInMountainArray(MountainArray &mountainArr) {
        int n = mountainArr.length();
        int low = 0, high = n - 1, mid;
        int ans = 0;
        while(low <= high){
            mid = low + (high - low) / 2;
            if(mountainArr.get(mid) > mountainArr.get(mid + 1)){
                ans = mid;
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return ans;
    }
    int fin(int s, int e, int target, MountainArray &mountainArr) {
        int low = s, high = e, mid;
        bool asc = mountainArr.get(high) > mountainArr.get(low);
        while(low <= high){
            mid = low + (high - low) / 2;
            if(mountainArr.get(mid) == target){
                return mid;
            }
            if(asc){
                if(mountainArr.get(mid) > target){
                    high = mid - 1;
                }else{
                    low = mid + 1;
                }
            }else{
                if(mountainArr.get(mid) < target){
                    high = mid - 1;
                }else{
                    low = mid + 1;
                }
            }
            
        }
        return -1;
    }
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int n = mountainArr.length();
        int m = peakIndexInMountainArray(mountainArr);
        int ans = fin(0, m, target, mountainArr);
        if(ans == -1){
            ans = fin(m + 1, n - 1, target, mountainArr);
        }
        
        return ans;
    }
};