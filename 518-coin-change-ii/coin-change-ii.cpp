class Solution {
public:
    int answer=0;
    int solve(int amount,vector<int>& coins,int index,vector<vector<int>>& dp){
        if (amount == 0) return 1;
        if (index == coins.size()) return 0;

        if (dp[index][amount] != -1) return dp[index][amount];

        int take = 0;
        if (amount - coins[index] >= 0)
            take = solve(amount - coins[index], coins, index, dp);
        
        int notTake = solve(amount, coins, index + 1, dp);

        return dp[index][amount] = take + notTake;

    }
    int change(int amount, vector<int>& coins) {
        
        vector<vector<int>> dp(coins.size(), vector<int>(amount + 1, -1));
        return solve(amount,coins,0,dp);
        // return dp[coins.size()-1][amount];
    }
};