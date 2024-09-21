class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<int> result;
        int current = 1;

        for (int i = 0; i < n; ++i) {
            result.push_back(current);
            current = getNextNumber(current, n);
        }

        return result;
    }

private:
    int getNextNumber(int current, int n) {
        if (current * 10 <= n) {
            return current * 10; // Move to the next "level" in the lexicographical order
        }

        if (current >= n) {
            current /= 10; // Go back to the parent node
        }
        
        current += 1; // Increment to get to the next number
        while (current % 10 == 0) {
            current /= 10; // Remove trailing zeros
        }

        return current;
    }
};
