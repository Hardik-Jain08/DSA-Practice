class Solution {
public:
    int brokenCalc(int s, int t) {
        int op = 0;
        while(t != s){
            if(t < s){
                op += (s - t);
                t += (s - t);
            }else{
                if((t & 1) != 0){
                    op++,t++;
                }else{
                    op++;
                    t /= 2;
                }
            }
        }
        return op;
    }
};