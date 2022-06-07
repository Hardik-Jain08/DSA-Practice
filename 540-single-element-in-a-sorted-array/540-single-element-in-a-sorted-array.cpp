class Solution
{
    public:
        int singleNonDuplicate(vector<int> &nums){
            int n = nums.size();
            int s = 0, e = n - 1, m;
            while (s <= e){
                m = s + (e - s) / 2;
                bool h = (m - s) % 2 == 0;
                if((m < n - 1) && nums[m] == nums[m+1]){
                    // [] -> mid, () -> searchable area
                    // mid is less then lest element
                    if(h){ 
                    // both sides are even 2 2 3 3 [4] 4 (5 9 9)
                        s = m + 2;
                    }else{ // (5) [9] 9
                        e = m - 1;
                    }
                }else if((m != 0) && nums[m-1] == nums[m]){
                // (2 2 3) 4 [4] 5 5 9 9
                    if(h){
                        e = m - 2;
                    }else{ // 2 [2] (3)
                        s = m + 1;
                    }
                }else return nums[m];
            }
            return -1;
        }
};