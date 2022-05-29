class Solution
{
    public:
        int largestRectangleArea(vector<int> &arr)
        {
            int n = arr.size();
            int ans = 0;
            vector<int> left(n, 0);
            stack<int> st_l;
            
            for (int i = 0; i < n; i++)
            {
                while (!st_l.empty() && arr[st_l.top()] >= arr[i])
                {
                    st_l.pop();
                }
                if (st_l.empty())
                {
                    left[i] = -1;
                }
                else
                {
                    left[i] = st_l.top();
                }
                st_l.push(i);
            }

            vector<int> right(n, 0);
            stack<int> st_r;
            
            for (int i = n - 1; i >= 0; i--)
            {
                while (!st_r.empty() && arr[st_r.top()] >= arr[i])
                {
                    st_r.pop();
                }
                if (st_r.empty())
                {
                    right[i] = n;
                }
                else
                {
                    right[i] = st_r.top();
                }
                st_r.push(i);
            }
            for (int i = 0; i < n; i++)
            {
               	// cout << left[i] << " " << right[i] << endl;
                ans = max(ans, (right[i] - left[i] - 1) *arr[i]);
            }
            return ans;
        }
};