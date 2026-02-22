class Solution {
public:
    int binaryGap(int n) {
        int maxd = 0;
        int curr = 0;
        bool found_first_one = false;
        while (n > 0) {
            int bit = n % 2;

            if (bit == 1) {
                if (found_first_one) {
                    maxd = max(maxd, curr);
                }
                curr = 1;
                found_first_one = true; 
            } else {
                if (found_first_one) curr++;
            }
            n /= 2;
        }
        
        return maxd;
    }
};