//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int dominantPairs(int n,vector<int> &arr){
        vector<int> v1(n/2),v2(n/2);
        for(int i = 0; i < n/2; i++) {
            v1[i] = arr[i];
        }
        for(int i = n/2; i < n; i++) {
            v2[i%(n/2)] = arr[i]*5;
        }
        
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());
        int ans = 0;
        n /= 2;
        for(int i = 0; i < n; i++) {
            ans += (upper_bound(v2.begin(), v2.end(), v1[i]) - v2.begin());
        }
        return ans;
    }  
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.dominantPairs(n,arr)<<endl;
    }
}
// } Driver Code Ends