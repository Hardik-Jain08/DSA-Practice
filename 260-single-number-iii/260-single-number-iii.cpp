class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int res = 0;
        for(int &x : nums){
            res ^= x;
        }
        int t;
        for(int i=0;i<32;i++){
            if(res&(1<<i)){
                t=i;break;
            }
        }
        int temp = res;
        for(int &x : nums){
            if(x & (1 << t)){
                res ^= x;
            }
        }
        int n1 = res;
        res ^= temp;
        return {n1,res};
    }
};