class Solution {
public:
    vector<string> kpc(string s) {
        string arr[] = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        if (s.size() == 0)
        {
            vector<string> res = {""};
            return res;
        }
        char c = s[0]; 
        string sstr = s.substr(1); 
        vector<string> temp = kpc(sstr); 
        vector<string> res;
        string str = arr[c - '2'];
        for(int i = 0; i < str.size(); i++)
        {
            for(auto x: temp)
            {
                res.push_back(str[i] + x);
            }
        }
        return res;
    }
    vector<string> letterCombinations(string s) {
        if(s == "")
        {
            return {};
        }
        return kpc(s);
    }
};