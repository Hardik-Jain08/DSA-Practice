class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int i = 1, j = n - 2;
        vector<int> right(n);
        vector<int> left(n);
        left[0] = height[0], right[n-1] = height[n-1];
        while(i < n){
            left[i] = max(left[i-1], height[i]);
            i++;
        }
        while(j >= 0){
            right[j] = max(right[j+1], height[j]);
            j--;
        }
        int ans = 0;
        for(int idx = 0; idx < n; idx++){
            ans += (min(right[idx], left[idx])) - height[idx];
            cout << ans << " ";
        }
        return ans;
    }
};