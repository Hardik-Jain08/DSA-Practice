class Solution {
public:
    bool vowel(char &ch) {
        if(ch == 'a' || ch == 'e' || ch =='i' || ch == 'o' || ch == 'u')
            return true;
        return false;
    }
    int maxVowels(string s, int k) {
        int currWindow = 0, mxWindow = 0, idx = 0;
        while(idx < k) {
            if(vowel(s[idx++])) {
                currWindow++;
            }
        }
        mxWindow = currWindow;
        for(int i = 0; i < s.size() - k; i++) {
            if(vowel(s[i]))
                currWindow--;
            if(vowel(s[idx++]))
                currWindow++;
            mxWindow = max(currWindow, mxWindow);
        }
        return mxWindow;
    }
};