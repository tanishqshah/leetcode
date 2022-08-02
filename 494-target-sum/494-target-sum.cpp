class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        // int dp[nums.size()+1][target+1];
        target=abs(target);
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
        }
        // sum=sum-target;
        if(sum<target || (sum+target)%2!=0)
            return 0;
        
        int m=sum+target;
        m=m/2;
        
        int n=nums.size();
        
        int dp[n+1][m+1];
        for(int i=0;i<=m;i++){
            dp[0][i]=0;
        }
        for(int i=0;i<=n;i++){
            dp[i][0]=1;
        }
        for(int i=1;i<=n;i++){
            for(int j=0;j<=m;j++){
                if(j>=nums[i-1]){
                    dp[i][j]=dp[i-1][j]+dp[i-1][j-nums[i-1]];
                }
                else
                    dp[i][j]=dp[i-1][j];
            }
        }
        return dp[n][m];
    }
};