//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    bool fun(int a, int b) {
        return (a >= 0 && b >= 0) || (a < 0 && b < 0);
    }
    vector<int> makeBeautiful(vector<int> arr) {
        vector<int> st;
        int n = 0;
        for(auto x : arr) {
            n = st.size();
            if(n == 0 || fun(st[n-1], x)) {
                st.push_back(x);
            } else {
                st.pop_back();
            }
        }
        return st;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        Solution obj;
        vector<int> res = obj.makeBeautiful(arr);
        for (int i = 0; i < res.size(); i++) {
            cout << res[i] << " ";
        }

        cout << "\n";
    }
}
// } Driver Code Ends