class Solution {
public:
    int solve(int i, int j, string &s, string &t, vector<vector<int>> &dp) {
        if (j == t.size()) return 1;       // All characters in t matched
        if (i == s.size()) return 0;       // s exhausted, t not matched

        if (dp[i][j] != -1) return dp[i][j];

        int res = 0;
        if (s[i] == t[j]) {
            res += solve(i + 1, j + 1, s, t, dp); // Match
        }
        res += solve(i + 1, j, s, t, dp);         // Skip

        return dp[i][j] = res;
    }

    int numDistinct(string s, string t) {
        int n = s.size(), m = t.size();
        vector<vector<int>> dp(n, vector<int>(m, -1));
        return solve(0, 0, s, t, dp);
    }
};
