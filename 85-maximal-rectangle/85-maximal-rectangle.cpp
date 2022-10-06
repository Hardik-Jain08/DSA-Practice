class Solution {
public:
    int mah(vector<int>& h) {
        int n = h.size();
        vector<pair<int,int>> nse(n);
        stack<int> st;
        for(int i = n - 1; i >= 0; i--){
            while(!st.empty() && h[st.top()] >= h[i]) st.pop();
            if(st.empty()) nse[i].first = n;
            else nse[i].first = st.top();
            st.push(i);
        }
        while(!st.empty()) st.pop();
        for(int i = 0; i < n; i++){
            while(!st.empty() && h[st.top()] >= h[i]) st.pop();
            if(st.empty()) nse[i].second = -1;
            else nse[i].second = st.top();
            st.push(i);
        }
        
        int ans = 0;
        for(int i = 0; i < n; i++){
            ans = max(ans,(nse[i].first - nse[i].second - 1)*h[i]);
        }
        return ans;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        int r = matrix.size(), c = matrix[0].size();
        vector<int> curr(c,0);
        int i = 0, ans = 0;
        while(i < r){
            int j = 0;
            while(j < c){
                if(matrix[i][j] == '0'){
                    curr[j] = 0;
                }else{
                    curr[j] += (matrix[i][j] == '1') ? 1:0;
                }
                j++;
            }
            ans = max(ans, mah(curr));
            i++;
        }
        return ans;
    }
};