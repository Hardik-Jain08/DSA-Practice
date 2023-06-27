#define pp pair<int,pair<int,int>>
#define F first
#define S second
class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<vector<int>> ans;
        priority_queue<pp> pq;
        for(int i = 0; i < nums1.size(); i++) {
            for(int j = 0; j < nums2.size(); j++) {
                int sum = nums1[i] + nums2[j];
                if(pq.size() < k) {
                    pq.push({sum, {nums1[i], nums2[j]}});
                } else if(pq.top().F > sum) {
                    pq.pop();
                    pq.push({sum, {nums1[i], nums2[j]}});
                } else {
                    break;
                }
            }
        }
        while(!pq.empty()) {
            ans.push_back({pq.top().S.F, pq.top().S.S});
            pq.pop();
        }
        return ans;
    }
};