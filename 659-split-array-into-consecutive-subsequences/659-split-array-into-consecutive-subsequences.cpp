class Solution {
public:
    bool isPossible(vector<int>& nums) {
        unordered_map<int, int> start, end;
        for(auto x : nums) ++start[x];
        for(int i : nums){
            if(start[i] == 0) continue;
            start[i]--;
            if(end[i-1] > 0){
                end[i-1]--;
                end[i]++;
            }else if(start[i+1] > 0 && start[i+2] > 0){
                start[i+1]--;
                start[i+2]--;
                end[i+2]++;
            }else{
                return false;
            }
        }
        return true;

    }
};