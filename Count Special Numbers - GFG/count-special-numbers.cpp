//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int countSpecialNumbers(int N, vector<int> arr) {
        int mx = INT_MIN;
        for(auto x : arr) {
            mx = max(mx, x);
        }
        vector<int> sieve(mx+1,0);
        for(int i = 0; i < N; i++) {
            if(sieve[arr[i]] > 1) continue;
            for(int j = arr[i]; j <= mx; j+=arr[i]) {
                sieve[j]++;
            }
        }
        int count = 0;
        for(auto x : arr) {
            if(sieve[x] > 1) {
                count++;
            }
        }
        return count;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }

        Solution ob;
        cout << ob.countSpecialNumbers(N, arr) << endl;
    }
    return 0;
}
// } Driver Code Ends