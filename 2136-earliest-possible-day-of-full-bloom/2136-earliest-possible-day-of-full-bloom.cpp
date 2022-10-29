class Solution {
public:
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
        int n = growTime.size();
        vector<pair<int,int>> arr(n);
        for(int i = 0; i < n; i++){
            arr[i] = {growTime[i], plantTime[i]};
        }
        sort(begin(arr), end(arr));
        int ans = 0;
        for(auto &[f,s] : arr){
            ans = max(ans, f) + s;
        }
        return ans;
    }
};