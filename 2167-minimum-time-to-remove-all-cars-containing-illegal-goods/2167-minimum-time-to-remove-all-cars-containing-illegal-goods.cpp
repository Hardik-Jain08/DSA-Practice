class Solution {
public:
    int minimumTime(string s) {
        int res = s.size();
        int mini = 0, sum = 0;
        for(auto c : s){
            sum += (c == '0') ? -1 : 1;
            mini = min(sum, mini);
            if(sum >= 0) sum = 0;
        }
        return res + mini;
    }
};