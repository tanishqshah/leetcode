class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        target=abs(target);
        int n=nums.size();
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
        }
        int m=(sum+target)/2;
        if(sum<target || (sum+target)%2!=0)
            return 0;
        
        return count(nums,n,m);
        
    }
    int count(vector<int>&nums , int n ,int m){
        int dp[n+1][m+1];
        for(int i=0;i<=n;i++){
            for(int j=0;j<=m;j++){
                if(i==0){
                    dp[i][j]=0;
                }
                if(j==0){
                    dp[i][j]=1;
                }
            }
        }
        
        for(int i=1 ;i<=n;i++){
            for(int j=0;j<=m;j++){
                if(nums[i-1]<=j){
                    dp[i][j]=dp[i-1][j-nums[i-1]]+dp[i-1][j];
                }
                else{
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        return dp[n][m];
    }
};