class Solution{
    public:
        int longestConsecutive(vector<int> &nums){
            unordered_map<int, bool> occur;
            for (auto &x: nums) occur[x] = true;
            for (auto &x: nums)
                if (occur.find(x - 1) != occur.end()) occur[x] = false;

            int templen;
            int len = 0;
            for (auto &x: nums){
                templen = 0;
                int k = x;
                if (occur[x] == true)
                    while (occur.find(k++) != occur.end()) templen++;
                if (templen > len){
                    len = templen;
                }
            }
            return len;
        }
};