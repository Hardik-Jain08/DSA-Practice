class Solution {
public:
    int maximumUnits(vector<vector<int>>& box, int truckSize) {
        int n = box.size();
        sort(box.begin(), box.end(), [](auto &a, auto &b){return a[1] > b[1];});
        int ans = 0;
        for(int i = 0; i < n; i++){
            if(truckSize <= 0) break;
            ans += min(truckSize, box[i][0]) * box[i][1];
            truckSize -= box[i][0];
        }
        return ans;
    }
};