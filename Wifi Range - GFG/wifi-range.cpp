//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    bool wifiRange(int N, string S, int X){
        int mx = 0;
        for(int i = 0; i < N; i++) {
            if(S[i] == '1') {
                mx = X;
            } else {
                if(mx <= -X) {
                    return 0;
                }
                mx--;
            }
        }
        return mx >= 0;
    }
};

//{ Driver Code Starts.

int main(){
    int T;
    cin >> T;
    while(T--){
        int N, X;
        string S;
        cin >> N >> X >> S;
        Solution obj;
        cout << obj.wifiRange(N, S, X) << "\n";
    }
}

// } Driver Code Ends