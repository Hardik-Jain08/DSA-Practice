class KthLargest {
public:
    int t;
    priority_queue<int,vector<int>, greater<int>> pq;
    KthLargest(int k, vector<int>& nums) {
        t = k;
        for(auto &x: nums) {
            pq.push(x);
            if(pq.size() > k)
                pq.pop();
        }
    }
    
    int add(int val) {
        if(pq.size() < t) {
            pq.push(val);
        }else if(val > pq.top()) {
            pq.push(val);
            pq.pop();
        }
        return pq.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */