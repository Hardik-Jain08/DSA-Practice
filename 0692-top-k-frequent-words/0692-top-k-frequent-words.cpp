class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        auto comp = [&](const pair<string,int>& a, const pair<string,int>& b) {
            return a.second < b.second || (a.second == b.second && a.first > b.first);
        };
        
        typedef priority_queue<pair<string, int>, vector<pair<string, int>>, decltype(comp)> pq_t;
        
        pq_t pq(comp);
        
        unordered_map<string,int> mp;
        for(auto &x: words){
            mp[x]++;
        }
        for(auto &p: mp){
            pq.emplace(p.first, p.second);
        }
        vector<string> ans(k, "");
        for(int i = 0; i < k; i++){
            ans[i] = pq.top().first;
            pq.pop();
        }
        
        return ans;
    }
};