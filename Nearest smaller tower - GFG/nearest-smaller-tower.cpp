//{ Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    vector<int> nearestSmallerTower(vector<int> arr)
    {
        int n = arr.size();
        vector<int> nsr(n), nsl(n);
        stack<int> st;
        // right
        for(int i = n-1; i >= 0; i--) {
            while(!st.empty() && arr[st.top()] >= arr[i]) {
                st.pop();
            }
            nsr[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }
        while(!st.empty()) st.pop();
        // left
        for(int i = 0; i < n; i++) {
            while(!st.empty() && arr[st.top()] >= arr[i]) {
                st.pop();
            }
            nsl[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }
        
        for(int i = 0; i < n; i++) {
            if(nsl[i] == -1 && nsr[i] == -1) {
                continue;
            } else if(nsl[i] == -1) {
                nsl[i] = nsr[i];
            } else if(nsr[i] == -1) {
                continue;
            } else {
                if(i - nsl[i] == nsr[i] - i) {
                    if(arr[nsl[i]] > arr[nsr[i]]) {
                        nsl[i] = nsr[i];
                    }
                } else if(nsr[i] - i < i - nsl[i]) {
                    nsl[i] = nsr[i];
                }
            }
        }
        return nsl;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        Solution ob;
        vector<int> ans = ob.nearestSmallerTower(v);
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends