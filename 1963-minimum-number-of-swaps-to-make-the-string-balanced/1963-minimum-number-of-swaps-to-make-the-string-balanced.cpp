class Solution {
public:
    int minSwaps(string s) {
        int n = s.size();
        int inc = 0;
        stack<char> st;
        for(int i = 0; i < n; i++){
            if(s[i] == '['){
                st.push('[');
            }else{
                if(st.empty()) inc++;
                else st.pop();
            }
        }
        return (inc+1)/2;
    }
};