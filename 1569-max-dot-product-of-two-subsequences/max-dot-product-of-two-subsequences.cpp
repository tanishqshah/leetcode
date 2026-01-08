class Solution {
public:
    int dp[501][501];
    vector<int> a, b;
    int n, m;

    int solve(int i, int j) {
        if (i == n || j == m) return -1e9;

        if (dp[i][j] != -1) return dp[i][j];

        int take = a[i] * b[j] + max(0, solve(i+1, j+1));
        int skip1 = solve(i+1, j);
        int skip2 = solve(i, j+1);

        return dp[i][j] = max({take, skip1, skip2});
    }

    int maxDotProduct(vector<int>& nums1, vector<int>& nums2) {
        a = nums1;
        b = nums2;
        n = a.size();
        m = b.size();
        memset(dp, -1, sizeof(dp));
        return solve(0, 0);
    }
};