class Solution {
public:
    string simplifyPath(string path) {
        stack<string> s;
        string ans = "";
        int n = path.size();
        for(int i = 0; i < n; i++){
            if(path[i] == '/'){
                continue;
            }
            
            string t = "";
            
            while(i < n && path[i] != '/'){
                t += path[i];
                ++i;
            }
            
            if(t == "."){
                continue;
            }else if(t == ".."){
                if(!s.empty()){
                    s.pop();
                }
            }else{
                s.push(t);
            }
        }
        while(!s.empty()){
            ans = "/" + s.top() + ans;
            s.pop();
        }
        if(ans == ""){
            return "/";
        }
        return ans;
    }
};