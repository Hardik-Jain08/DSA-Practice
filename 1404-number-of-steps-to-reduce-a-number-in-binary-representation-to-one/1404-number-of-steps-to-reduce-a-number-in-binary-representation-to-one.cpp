class Solution {
public:
    int numSteps(string s) {
        int ans = 0;
        while(s != "1"){
            if(s.back() == '0'){
                ans++;
                s.pop_back();
            }else{
                int k = s.size() - 1;
                while(k >= 0 && s[k] == '1'){
                    s[k--] = '0';
                }
                if(k == -1){
                    s = "1" + s;
                }else{
                    s[k] = '1';
                }
                ans++;
            }
        }
        return ans;
    }
};