class Solution {
public:
    int countOrders(int n) {
        long long int mod=pow(10,9)+7;
        vector<long long>dp(n+1,0);
        dp[1]=1;
        for(int i=2;i<=n;i++){
            int x=2*i-1;
            x=x*(x+1)/2;
            dp[i]=(dp[i-1]*x)%mod;
        }
        return dp[n];
    }
};