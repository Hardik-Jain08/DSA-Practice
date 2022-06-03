class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
        int n = a.size();
        vector<int> ans;
        for (int i = 0; i < n; i++){
            if(ans.empty() || a[i] > 0) ans.push_back(a[i]);
            else{
                while(!ans.empty() && ans.back() > 0 && abs(a[i]) > ans.back()){
                    ans.pop_back();
                }
                if(!ans.empty() && a[i] + ans.back() == 0) ans.pop_back();
                else if(ans.empty() || ans.back() < 0) ans.push_back(a[i]);
            }
        }
        return ans;
    }
};