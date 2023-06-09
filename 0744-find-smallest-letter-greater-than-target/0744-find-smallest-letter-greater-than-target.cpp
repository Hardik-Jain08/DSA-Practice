class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int lo = 0, hi = letters.size() -1, m;
        while(lo < hi) {
            m = lo + (hi - lo) /2;
            if(letters[m] > target) {
                hi = m;
            }else {
                lo = m + 1;
            }
        }
        return letters[hi] <= target ? letters[0] : letters[hi];
    }
};