class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int i = 0, j = 0, cnt = 0, ans = 0;
        vector<int> map(128,0);
        while(j < n){
            if(map[s[j++]]++ > 0) cnt++;
            while(cnt > 0) if(map[s[i++]]-- > 1) cnt--;
            ans = max(ans, j - i);
        }
        return ans;
    }
};