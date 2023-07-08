class Solution {
public:
    long long putMarbles(vector<int>& w, int k) {
        int n = w.size() - 1;
        vector<long long> arr(n);
        long long ans = 0;
        for (int i = 0; i < n; i++) {
            arr[i] = w[i] + w[i + 1];
        }
        sort(arr.begin(), arr.end());
        for (int i = 0; i < k - 1; i++) {
            ans += arr[n - 1 - i] - arr[i];
        }
        return ans;
    }
};