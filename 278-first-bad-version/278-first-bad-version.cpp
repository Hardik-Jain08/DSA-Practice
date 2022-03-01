// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int st = 1;
        int en = n;
        int ans = -1, m;
        while(st <= en){
            m = st + (en - st) / 2;
            if(isBadVersion(m)){
                ans = m;
                en = m - 1;
            }else{
                st = m + 1;
            }
        }
        return ans;
    }
};