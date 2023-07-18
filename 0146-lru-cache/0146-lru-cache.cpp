class LRUCache {
public:
    queue<int> his;
    unordered_map<int,int>q, mp;
    int c;
    LRUCache(int capacity) {
        c = capacity;
    }
    
    int get(int key) {
        if(mp.count(key))
        {
            his.push(key);
            q[key]++;
            return mp[key];
        }
        return -1;
    }
    void remove_lru() {
        while(!his.empty()) {
            int t = his.front();
            his.pop();
            --q[t];
            if(q[t] == 0) {
                mp.erase(t);
                break;
            }
        }
    }
    void put(int key, int value) {
        his.push(key);
        ++q[key];
        mp[key] = value;
        if(mp.size() > c) {
            remove_lru();
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */