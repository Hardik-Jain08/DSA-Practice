class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        for(auto &x:stones) pq.push(x);
        int s1 = pq.top();
        pq.pop();
        int temp;
        while(pq.size() >= 1){
            if(!pq.empty() && s1 >= pq.top()){
                temp = pq.top();
                pq.pop();
                pq.push(s1 - temp);
                s1 = pq.top();
                pq.pop();
            }
        }
        return s1;
    }
};