class Solution {
public:
    int minInsertions(string s) {
        int c = 0,ans = 0; 
        for(int i = 0; i < s.size(); i++){
            if(s[i] == ')'){
                if(i+1 == s.size() || s[i+1] != ')'){
                    ans++;
                }else{
                    i++;
                }
                if(c > 0){
                    c--;
                }else{
                    ans++;
                }
            }else{
                c++;
            }
        }
        ans+= c*2;
        return ans;
    }
};