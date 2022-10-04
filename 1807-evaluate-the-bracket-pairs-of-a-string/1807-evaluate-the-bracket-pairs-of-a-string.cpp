class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string, string> mp;
        for(auto x: knowledge){
            mp[x[0]] = x[1];
        }
        int i = 0, j = 0, n = s.size();
        string res = "";
        bool flag = false;
        while(j < n){
            if(s[j] == '('){
                flag = true;
                i = j;
            }else if(s[j] == ')'){
                string str = s.substr(i+1,j-i-1);
                res += (mp.find(str) == mp.end()) ? "?" : mp[str];
                flag = false;
            }else if(!flag)
            res += s[j];
            j++;
        }
        return res;
    }
};