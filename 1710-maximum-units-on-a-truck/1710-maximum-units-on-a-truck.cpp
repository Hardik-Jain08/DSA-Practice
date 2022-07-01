class Solution {
public:
    static bool cmp(const pair<int,int> &a,
              const pair<int,int> &b){
        return (a.second > b.second);
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int n = boxTypes.size();
        vector<pair<int,int>> vec;
        for(int i = 0; i < n; i++){
            vec.push_back({boxTypes[i][0],boxTypes[i][1]});
        }
        sort(vec.begin(), vec.end(), cmp);
        int ans = 0;
        for(int i = 0; i < n; i++){
            if(truckSize <= 0) break;
            ans += min(truckSize, vec[i].first) * vec[i].second;
            truckSize -= vec[i].first;
        }
        return ans;
    }
};