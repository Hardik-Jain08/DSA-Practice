class TimeMap {
public:
    unordered_map<string, vector<pair<int, string>>> umap;
    TimeMap() {}
    
    void set(string key, string value, int ts) {
        umap[key].push_back({ts,value});
    }
    
    string get(string key, int ts) {
        auto &v = umap[key];
        int i = 0, j = v.size() - 1, idx = -1;
        while(i <= j){
            int mid = i + (j - i) / 2;
            if(v[mid].first <= ts)
            {
                idx = mid;
                i = mid+1;
            }
            else j = mid-1;
        }
        if(idx == -1) return "";
        return v[idx].second;
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */