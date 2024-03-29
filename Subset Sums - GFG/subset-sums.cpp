// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
    void helper(vector<int> arr, vector<int> &ans, int idx, int sum){
        if(idx == arr.size()){
            ans.push_back(sum);
            return;
        }
        helper(arr, ans, idx+1, sum);
        helper(arr, ans, idx+1, sum + arr[idx]);
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int> ans;
        helper(arr, ans, 0, 0);
        return ans;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends