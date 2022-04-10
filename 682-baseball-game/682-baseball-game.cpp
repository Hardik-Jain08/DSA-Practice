class Solution {
public:
    int calPoints(vector<string>& ops) {
        int n = ops.size();
        stack<int> st;
        for(int idx = 0; idx < n; idx++){
            char ch = ops[idx][0];
            if(ch == '+'){
                int one = st.top();
                st.pop();
                int two = st.top();
                st.push(one);
                st.push(one + two);
            }else if(ch == 'D'){
                st.push(2*st.top());
            }else if(ch == 'C'){
                st.pop();
            }else{
                st.push(stoi(ops[idx]));
            }
        }
        int ans = 0;
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        return ans;
    }
};