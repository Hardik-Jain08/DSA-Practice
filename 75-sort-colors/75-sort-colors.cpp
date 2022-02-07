class Solution {
public:
    void sortColors(vector<int>& nums) {
        unordered_map <int,int> umap;
        for(int i = 0; i < nums.size(); i++){
            umap[nums[i]]++;
        }
        int zero = umap[0], one = umap[1], two = umap[2];
        for(int i = 0; i < zero; i++){
            nums[i] = 0;
        }
        one += zero;
        for(int i = zero; i < one; i++){
            nums[i] = 1;
        }
        two += one;
        for(int i = one; i < two; i++){
            nums[i] = 2;
        }
    }
};