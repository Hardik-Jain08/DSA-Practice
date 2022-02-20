class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& i) {
        sort(i.begin(),i.end());
        int m = i.size();
        int res = 1;
        int x1 = i[0][0], y1 = i[0][1];
        for(int j = 1; j < m ; j++){
            if(i[j][0] > x1 && i[j][1] > y1){
                ++res;
            }
            if(i[j][1] > y1){
                x1 = i[j][0], y1 = i[j][1];
            }
        }
        return res;
    }
};