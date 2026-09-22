class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n < 2) {
            if (n <= 0) {
                return false;
            }
            return true;
        }

        return n % 2 == 0 ? isPowerOfTwo(n / 2) : false;
    }
};