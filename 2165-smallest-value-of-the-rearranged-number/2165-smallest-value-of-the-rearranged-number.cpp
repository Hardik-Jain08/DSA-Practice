class Solution {
public:
    long long smallestNumber(long long num) {
        string s = to_string(abs(num));
        if(num >= 0) sort(s.begin(),s.end());
        else sort(s.begin(),s.end(), greater<char>());
        if(num > 0){
            int idx = s.find_first_not_of('0');
            swap(s[0],s[idx]);
        }
        long long res = stoll(s);
        if(num < 0) res *= -1;
        return res;
    }
};