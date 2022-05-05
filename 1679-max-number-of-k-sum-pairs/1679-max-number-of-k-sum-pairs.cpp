class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int res = 0;
        unordered_map<int,int> umap;
        for(auto &x: nums){
            if(umap.find(k-x) != umap.end() && umap[k-x] >= 1){
                res++;
                umap[k-x]--;
            }else{
                umap[x]++;
            }
        }
        return res;
    }
};