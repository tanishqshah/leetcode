class Solution {
public:
    bool isMatch(string s, string p) {
        int n = p.length(), m = s.length();
        vector<vector<bool>> dp(n + 1, vector<bool>(m + 1, false));

        // Base cases
        dp[0][0] = true; // Empty pattern matches empty string
        
        // Fill first column (pattern vs empty string)
        for (int i = 1; i <= n; i++) {
            dp[i][0] = (p[i - 1] == '*') ? dp[i - 1][0] : false;
        }

        // Fill the DP table
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                if (p[i - 1] == s[j - 1] || p[i - 1] == '?') {
                    dp[i][j] = dp[i - 1][j - 1]; // Match single character
                } else if (p[i - 1] == '*') {
                    dp[i][j] = dp[i - 1][j] || dp[i][j - 1]; // '*' matches empty or more characters
                }
            }
        }

        return dp[n][m];
    }
};
