class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int x = coordinates[0][0];
        int x1 = coordinates[1][0];
        int y = coordinates[0][1];
        int y1 = coordinates[1][1];
        int dx = x1 - x;
        int dy = y1 - y;
        for(int i = 2; i < coordinates.size(); i++) {
            int dxi = x1 - coordinates[i][0];
            int dyi = y1 - coordinates[i][1];
            if(dx*dyi != dy*dxi)
                return false;
        }
        return true;
    }
};