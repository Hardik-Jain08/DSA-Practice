class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
        int n = nums.size();
        int minn = INT_MAX, maxx = INT_MIN;
        for(int i = 0; i < n; i++){
            if((nums[i] & 1) != 0){
                nums[i] <<= 1;
            }
            minn = min(nums[i], minn);
            maxx = max(nums[i], maxx);
        }
        int min_dev = maxx - minn;
        priority_queue<int> pq;
        for(int i = 0; i < n; i++){
            pq.push(nums[i]);
        }
        
        while((pq.top() & 1) == 0){
            int top = pq.top();
            pq.pop();
            min_dev = min(min_dev, top - minn);
            top >>= 1;
            pq.push(top);
            minn = min(minn, top);
        }
        min_dev = min(min_dev, pq.top() - minn);
        return min_dev;
    }
};