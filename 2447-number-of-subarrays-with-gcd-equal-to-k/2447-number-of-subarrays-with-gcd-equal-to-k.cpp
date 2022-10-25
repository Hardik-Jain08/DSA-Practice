class Solution {
public:
    int gcd(int a, int b)
    {
        return b == 0 ? a : gcd(b, a % b);   
    }
    int subarrayGCD(vector<int>& nums, int k) {
        int count = 0;
        int n = nums.size();
        for (int i=0; i <n; i++)
        {
            int gcdvar = nums[i];
            for (int j=i; j<n; j++)
            {
                gcdvar = gcd(gcdvar,nums[j]);
                if(gcdvar == k){
                    count++;
                }
            }
        }
        return count;
    }
};