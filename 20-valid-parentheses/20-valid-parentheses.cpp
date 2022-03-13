class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int n = s.size();
        for(int i = 0; i < n; i++){
            
            if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
                st.push(s[i]);
            }else if(!st.empty()){
                switch(s[i])
                {
                    case ')':
                        if(st.top() == '(')
                            st.pop();
                        else return false;
                        break;
                    case '}':
                        if(st.top() == '{')
                            st.pop();
                        else return false;
                        break;
                    case ']':
                        if(st.top() == '[')
                            st.pop();
                        else return false;
                        break;
                }
            }else 
                return false;
            
        }
        if(!st.empty()){
            return false;
        }
        return true;
    }
};