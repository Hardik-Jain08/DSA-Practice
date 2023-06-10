class Solution {
public:
    long sum(int a, int an) {
        return (an - a + 1L) * (a + an) / 2;
    }
    bool fun(int idx, int a, int n, int mx) {
        return sum(max(0, a - idx), a) + sum(max(0, a - ((n - 1) - idx)), a) - a <= mx;
    }
    int maxValue(int n, int index, int maxSum) {
        maxSum -= n;
        int lo = 0, hi = maxSum, m;
        while (lo < hi) {
            m = (hi+lo+1)/2;
            if(fun(index, m, n, maxSum)) {
                lo = m;
            } else {
                hi = m - 1;
            }
        }
        return lo + 1;
    }
};