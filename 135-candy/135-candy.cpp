class Solution {
public:
    int candy(vector<int>& ratings) {
        if (ratings.size() == 0) return 0;
            int n = ratings.size(), res = 1;
            int up = 0, down = 0, peak = 0;
            for (int i = 1; i < n; i++) {
                if (ratings[i - 1] < ratings[i]) {
                    peak = ++up;
                    down = 0;
                    res += 1 + up;
                } else if (ratings[i - 1] == ratings[i])  {
                    peak = up = down = 0;
                    res += 1;
                } else {
                    up = 0;
                    down++;
                    int k;
                    if(peak >= down) k = -1;
                    else k = 0;
                    res += 1 + down + k;
                }
            }

            return res;
    }
};