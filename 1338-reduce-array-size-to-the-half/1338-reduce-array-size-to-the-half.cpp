class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int, int> freq;
        for(auto x : arr) freq[x]++;
        int s = freq.size();
        vector<int> fmap;
        int i = 0;
        for (auto it = freq.begin(); it != freq.end(); ++it)
            fmap.push_back(it->second);
 
        sort(fmap.begin(), fmap.end(), greater<int>());
        int n = arr.size() / 2, ans = 0, cnt = 0;
        while(n > ans){
            ans += fmap[i++], cnt++;
        }
        return cnt;
    }
};