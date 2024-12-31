class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        int maxDay = days[days.size() - 1];

        vector<int>travelDay(maxDay+1,0);
        for (int day : days)
            travelDay[day] = 1;

        vector<int>dp(maxDay+1);
        dp[0]=0;
        for(int i=1;i<=maxDay;i++){
            if (!travelDay[i]) {
                dp[i] = dp[i - 1];
                continue;
            }
            dp[i]=dp[i-1]+costs[0];
            dp[i]=min(dp[max(0,i-7)]+costs[1],dp[i]);
            dp[i]=min(dp[max(0,i-30)]+costs[2],dp[i]);
        }
        return dp[maxDay];
    }
};