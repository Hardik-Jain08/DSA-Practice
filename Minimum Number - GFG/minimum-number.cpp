//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int fn(int a, int b) {
        if(a == 0) return b;
        if(b == 0) return a;
        if(max(a,b) % min(a,b) == 0) return min(a,b);
        return max(a,b) % min(a,b);
    }
    int minimumNumber(int n,vector<int> &arr){
        if(n == 1) return arr[0];
        int i = 1, curr = arr[0];
        while(i < n) {
            curr = fn(curr, arr[i++]);
        }
        return curr;
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
        cout<<ob.minimumNumber(n,arr)<<endl;
    }
}
// } Driver Code Ends