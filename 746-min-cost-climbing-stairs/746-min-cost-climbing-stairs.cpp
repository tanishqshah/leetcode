class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int ans=0;
        vector<int>dp(cost.size()+1,-1);
        dp[0]=0;
        dp[1]=0;
        for(int i=2;i<=cost.size();i++){
            dp[i]=min(cost[i-1]+dp[i-1],cost[i-2]+dp[i-2]);
        }
        return dp[cost.size()];
    }
};