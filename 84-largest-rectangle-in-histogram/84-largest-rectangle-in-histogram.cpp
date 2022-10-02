class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        int n = h.size();
        vector<pair<int,int>> nse(n);
        stack<int> st;
        // next smaller element to the right
        for(int i = n - 1; i >= 0; i--){
            while(!st.empty() && h[st.top()] >= h[i]) st.pop();
            if(st.empty()) nse[i].first = n;
            else nse[i].first = st.top();
            st.push(i);
        }
        // empty the stack if there is something left 
        while(!st.empty()) st.pop();
        // next smaller element to the left
        for(int i = 0; i < n; i++){
            while(!st.empty() && h[st.top()] >= h[i]) st.pop();
            if(st.empty()) nse[i].second = -1;
            else nse[i].second = st.top();
            st.push(i);
        }
        
        int ans = 0;
        for(int i = 0; i < n; i++){
            ans = max(ans,max(h[i], (nse[i].first - nse[i].second - 1)*h[i]));
        }
        return ans;
    }
};