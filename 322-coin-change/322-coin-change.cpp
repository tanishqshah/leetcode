class Solution {
public:
    int coinChange(vector<int>& nums, int amt) {
        vector<vector<int>>dp(nums.size()+1,vector<int>(amt+1,INT_MAX-1));
        for(int i=0;i<nums.size()+1;i++){
            dp[i][0]=0;
        }
        for(int i=1;i<=nums.size();i++){
            for(int j=1;j<=amt;j++){
                if(j>=nums[i-1]){
                    dp[i][j]=min(1+dp[i][j-nums[i-1]],dp[i-1][j]);
                }
                else
                    dp[i][j]=dp[i-1][j];
            }
        }
        int n=nums.size();
        return dp[n][amt] == INT_MAX-1 ? -1 : dp[n][amt];
    }
};