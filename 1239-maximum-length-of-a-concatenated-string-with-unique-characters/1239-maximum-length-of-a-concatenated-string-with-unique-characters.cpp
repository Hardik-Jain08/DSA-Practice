class Solution { 
public:
    int maxLength(vector<string>& arr) {
        int n = arr.size(), allMask = 1 << n, ans = 0;
        for (int mask = 0; mask < allMask; ++mask) {
            int strSize = 0;
            int seen = 0; 
            bool isValid = true;
            for (int i = 0; i < n; ++i) {
                if (((mask >> i) & 1) == 0) continue;
                for (char c : arr[i]) {
                    int j = c - 'a';
                    if ((seen >> j) & 1) { 
                        isValid = false;
                        break;
                    }
                    seen = seen | (1 << j); 
                    strSize += 1;
                }
                if (!isValid) break; 
            }
            if (isValid && strSize > ans) ans = strSize;
        }
        return ans;
    }
};