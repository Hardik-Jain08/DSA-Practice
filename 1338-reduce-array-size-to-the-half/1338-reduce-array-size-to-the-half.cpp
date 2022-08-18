class Solution {
public:
    static bool compare(pair<int,int> &p1, pair<int, int> &p2){
        if (p1.second == p2.second)
            return p1.first < p2.first;
        return p1.second > p2.second;
    }
    
    int minSetSize(vector<int>& arr) {
        map<int, int> freq;
        for(auto x : arr) freq[x]++;
        int s = freq.size();
        pair<int, int> p[s];
        int i = 0;
        for (auto it = freq.begin(); it != freq.end(); ++it)
            p[i++] = {it->first, it->second};
 
        sort(p, p + s, compare);
        int n = arr.size() / 2, ans = 0, cnt = 0;
        i = 0;
        while(n > ans){
            ans += p[i++].second, cnt++;
        }
        return cnt;
    }
};