class Solution {
public:
    int findPeakElement(vector<int>& arr) {
        int n = arr.size();
        int low = 0, high = n - 1, mid;
        while(low < high){
            mid = low + (high - low) / 2;
            if(arr[mid] > arr[mid + 1]){
                high = mid;
            }else{
                low = mid + 1;
            }
        }
        return high;
    }
};