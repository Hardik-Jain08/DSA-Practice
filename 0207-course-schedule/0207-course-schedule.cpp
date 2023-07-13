class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& g) {
        vector<int>adj[n];
        for(auto it : g) {
            adj[it[1]].push_back(it[0]);
        }
        vector<int>indegree(n,0);
        for(int i = 0; i < n; i++) {
            for(auto it : adj[i]) {
                ++indegree[it];
            }
        }
        queue<int> q;
        for(int i = 0; i < n; i++) {
            if(indegree[i] == 0) {
                q.push(i);
            }
        }
        vector<int> top;
        while(!q.empty()) {
            int node = q.front();
            q.pop();
            top.push_back(node);
            for(auto nbr:adj[node]) {
                indegree[nbr]--;
                if(indegree[nbr] == 0)
                {
                    q.push(nbr);
                }
            }
        }
        if(top.size() == n) {
            return true;
        }
        return false;
    }
};