class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int s = 1, e = *max_element(piles.begin(),piles.end());
        int m,hours, n = piles.size();
        while(s <= e){
            m = s + (e - s) / 2;
            hours = 0;
            for(int i = 0; i < n; i++){
                int x = (piles[i] / m) + (piles[i] % m != 0);
                hours += x;
            }
            if(hours > h){
                s = m + 1;
            }else{
                e = m - 1;
            }
        }
        return s;
    }
};