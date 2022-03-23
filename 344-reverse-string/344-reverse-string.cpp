class Solution {
public:
    void rev(vector<char>& s, int i, int j) {
        if(i < j){
            swap(s[i++],s[j--]);
            rev(s, i, j);
        }
        return;
    }
    void reverseString(vector<char>& s) {
        rev(s, 0, s.size() - 1);
    }
};