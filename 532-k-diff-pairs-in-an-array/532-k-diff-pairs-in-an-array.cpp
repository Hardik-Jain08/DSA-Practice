class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int res = 0;
        unordered_map <int,int> umap;
        for(int i:nums){
            umap[i]++;
        }
        for(auto i : umap){
            if(k == 0){
                if(i.second > 1) res++;
            }
            else{
                if(umap.find(i.first + k) != umap.end()){
                    res++;
                }
            }
        }
        return res;
    }
};
//sort(nums.begin(), nums.end());
//         int n = nums.size();
//         for(int i = 0; i < n - 1; i++){
//             int l = i + 1, r = n - 1,m, target = nums[i] + k;
//             while(l < r){
//                 m = l + (r - l) / 2;
//                 if(nums[m] == target){
//                     res++;
//                     break;
//                 }
//                 else if(nums[m] > target){
//                     r = m - 1;
//                 }
//                 else if(nums[m] < target)
//                 {
//                     l = m + 1;
//                 }
//             }
//         }