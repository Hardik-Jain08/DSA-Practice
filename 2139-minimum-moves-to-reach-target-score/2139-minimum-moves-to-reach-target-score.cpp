class Solution {
public:
    int minMoves(int target, int maxDiv) {
        int ans = 0;
        while(target != 1){
            if((target & 1) == 0){
                if(maxDiv){
                    target >>= 1;
                    maxDiv--;
                }else{
                    return ans + target - 1; 
                }
            }else{
                  target--; 
            }
            ans++;
        }
        return ans;
    }
};