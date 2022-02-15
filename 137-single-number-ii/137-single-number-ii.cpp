class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map <int,int> f;
        for(auto &x : nums){
            f[x]++;
        }
        for(auto &x : nums){
            if(f[x] == 1)
                return x;
        }
        return 0;
    }
};