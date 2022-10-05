class Solution {
public:
    int nextGreaterElement(int n) {
        string s = to_string(n);
        int sz = s.size();
        int i = sz - 2, j = sz - 1;
        while(i >= 0 && (s[i] >= s[i+1])) i--;
        
        if(i < 0){
            return -1;
        }else{
            while(j > i && s[j] <= s[i]){
                j--;
            }
        }
        swap(s[i], s[j]);
        reverse(s.begin() + i + 1, s.end());
        int ans = (stoll(s) > INT_MAX)? -1 : stoll(s); 
        return ans;
    }
};