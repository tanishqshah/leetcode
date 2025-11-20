class Solution {
public:
    static int intersectionSizeTwo(vector<vector<int>>& a) {
        sort(a.begin(), a.end(), [](const vector<int>& x, const vector<int>& y) {
            if (x[1] != y[1]) return x[1] < y[1];
            return x[0] > y[0];
        });
        int start = -1;
        int end = -1;
        int count = 0;
        for (const vector<int>& interval : a) {
            int left = interval[0];
            int right = interval[1];
            if (left > end) {
                start = right - 1;
                end = right;
                count += 2;
            } else if (left > start) {
                start = end;
                end = right;
                count += 1;
            }
        }
        return count;
    }
};