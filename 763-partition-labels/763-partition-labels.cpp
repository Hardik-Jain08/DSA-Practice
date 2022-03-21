class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> ans;
        unordered_map<char,int> umap;
        int n = s.size();
        for(int i = 0; i < n; i++){
            umap[s[i]] = i;
        }
        int mx = 0, prev = -1;
        for(int i = 0; i < n; i++){
            mx = max(mx, umap[s[i]]);
            if(mx == i){
                ans.push_back(mx - prev);
                prev = mx;
            }
        }
        return ans;
    }
};