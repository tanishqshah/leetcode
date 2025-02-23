class Solution {
public:
    int maxProfit(int k, vector<int>& price) {
        int n= price.size();
        vector<vector<vector<int>>>dp(price.size()+1,vector<vector<int>>(2,vector<int>(k+1,0)));
        for(int index=n-1;index>=0;index--){
            for(int buy=0;buy<=1;buy++){
                for(int cap=1;cap<=k;cap++){
                    int profit=0;
                    if(buy){
                        profit=max(-price[index]+dp[index+1][0][cap],dp[index+1][1][cap]);
                    }
                    else{
                        profit=max(price[index]+dp[index+1][1][cap-1],dp[index+1][0][cap]);
                    }
                    dp[index][buy][cap] = profit;
                }
            }
        }
        return dp[0][1][k];
    }
};