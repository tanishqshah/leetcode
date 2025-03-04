class Solution {
public:
    bool checkPowersOfThree(int n) {
        while (n > 0) {
            int remainder = n % 3;
            if (remainder == 2) {
                return false;
            }
            n /= 3; // Equivalent to n = n / 3;
        }
        return true;
    }
};