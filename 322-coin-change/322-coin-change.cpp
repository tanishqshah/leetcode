class Solution {
public:
     int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        
        vector<vector<int>> dp(n+1 , vector<int> (amount+1, INT_MAX-1));
        for(int i = 0 ; i < n+1 ; i++) dp[i][0] = 0;
        
        for(int i = 1 ; i < n+1 ; i++) {
            for(int j = 1 ; j < amount+1 ; j++) {
                if(j - coins[i-1] >= 0) dp[i][j] = min(1 + dp[i][j - coins[i-1]], dp[i-1][j]);
                else dp[i][j] = dp[i-1][j];
            }
        }
        
        return dp[n][amount] == INT_MAX-1 ? -1 : dp[n][amount];
    }
};