class Solution {
public:
    int addDigits(int n) {
        return 1 + (n - 1) % 9;
    }
};