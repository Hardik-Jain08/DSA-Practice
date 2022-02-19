class Solution {
public:
    string removeKdigits(string num, int k) {
        if(num.size() <= k)   
            return "0";
        
        if(k == 0)
            return num;
        
        stack<char> st;
        int n = num.size();
        st.push(num[0]);
        for(int i = 1; i < n; i++){
            while(!st.empty() && k > 0 && st.top() > num[i]){
                st.pop();
                k--;
            }
            st.push(num[i]);
            if(st.size() == 1 && num[i] == '0')
                st.pop();
        }
        while(k && !st.empty()){
            k--;
            st.pop();
        }
        
        if(st.empty()) return "0";
        
        string res = "";
        
        while (!st.empty()) {
            res += st.top();
            st.pop();
        }
        reverse(res.begin(), res.end());
        
        return res;
    }
};