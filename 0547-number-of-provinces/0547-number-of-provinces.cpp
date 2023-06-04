class Solution {
public:
    vector<bool> vis;
    int sz;
    void dfs(vector<vector<int>>& adj, int node){
        stack<int> s;
        if(!vis[node]){
            vis[node] = true;
            s.push(node);
        }
        while(!s.empty()){
            int k = s.top();
            s.pop();
            for(int i = 0; i < sz; i++){
                if(adj[k][i] == 1 && !vis[i]){
                    vis[i] = true;
                    s.push(i);
                }
            }
        }
          
    }
    
    int findCircleNum(vector<vector<int>>& adj) {
        sz = adj.size();
        vis.resize(sz, false);
        int ans = 0;
        for(int i = 0; i < sz; i++){
            if(!vis[i]){
                dfs(adj, i);
                ans++;
            }
        }
        return ans;
    }
};