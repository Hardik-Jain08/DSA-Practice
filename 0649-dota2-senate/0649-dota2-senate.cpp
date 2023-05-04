class Solution {
public:
    string predictPartyVictory(string senate) {
        int n = senate.size();
        queue<int> r, d;
        for(int i = 0; i < n; i++) {
            senate[i] ==  'R' ? r.push(i) : d.push(i);
        }
        while(!r.empty() && !d.empty()) {
            r.front() < d.front() ? r.push(n++) : d.push(n++);
            r.pop(), d.pop();
        }
        return r.empty() ? "Dire" : "Radiant";
    }
};