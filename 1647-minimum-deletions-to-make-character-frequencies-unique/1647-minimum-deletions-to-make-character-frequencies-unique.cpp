class Solution
{
    public:
        int minDeletions(string s)
        {
            vector<int> abc(26);	// frequency table for characters
            
            for (auto &ch: s)
            {
                abc[ch - 'a']++;
            }
            int ans = 0;
            sort(abc.begin(), abc.end(), greater<int>());
            for (int i = 1; i < 26; i++)
            {
                if (abc[i] >= abc[i-1] && abc[i] != 0){
                    abc[i]--, ans++, i--;
                }
            }
            return ans;
        }
};