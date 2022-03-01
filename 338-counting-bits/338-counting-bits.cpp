class Solution {
public:
    int cnt(int n){
        int c = 0;
        while(n){
            n &= (n-1);
            c++;
        }
        return c;
    }
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i = 0; i <= n; i++){
            ans.push_back(cnt(i));
        }
        return ans;
    }
};