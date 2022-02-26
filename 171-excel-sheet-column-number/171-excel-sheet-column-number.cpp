class Solution {
public:
    int titleToNumber(string c) {
        int res = 0;
        int t;
        for(const char &ch : c){
            t = (ch - '@');
            res = (26 * res) + t;
        }
        return res;
    }
};