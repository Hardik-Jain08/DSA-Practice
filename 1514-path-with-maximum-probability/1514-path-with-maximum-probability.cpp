class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {
    vector<vector<pair<int, double>>> al(n);
        for(int i=0;i<edges.size();i++){
            al[edges[i][0]].push_back({edges[i][1], succProb[i]});
            al[edges[i][1]].push_back({edges[i][0], succProb[i]});
        }
        vector<double> Pb(n, 0);
        queue<int> q;
        q.push(start);
        Pb[start] = 1;
        while (!q.empty()){
            int t = q.front();
            q.pop();
            for (auto node : al[t]){
                int next = node.first;
                double p = node.second;
                if (Pb[next] < Pb[t] * p) Pb[next] = Pb[t] * p, q.push(next);
            }
        }
        return Pb[end];
    }
};