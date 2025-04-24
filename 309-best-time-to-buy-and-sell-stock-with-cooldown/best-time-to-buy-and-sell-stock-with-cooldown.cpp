class Solution {
public:
    int solve(vector<int>&prices,int buy,int index,vector<vector<int>>&dp){
        if(index>=prices.size())
            return 0;
        if(dp[index][buy]!=-1)
            return dp[index][buy];
        int answer;
        if(buy){
            answer = max(-prices[index] + solve(prices,0,index+1,dp),solve(prices,1,index+1,dp));
        }
        else{
            answer =  max(solve(prices,0,index+1,dp),prices[index] + solve(prices,1,index+2,dp));
        }
        return dp[index][buy] = answer;
    }
    int maxProfit(vector<int>& prices) {
        vector<vector<int>>dp(prices.size(),vector<int>(2,-1));
        return solve(prices,1,0,dp);
    }
};