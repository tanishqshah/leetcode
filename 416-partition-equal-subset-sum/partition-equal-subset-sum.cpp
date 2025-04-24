class Solution {
public:
    bool solve(vector<int>&nums,int sum , int i,vector<vector<int>>&dp){
        if(sum==0){
            return true;
        }
        if(sum<0){
            return false;
        }
        if(i==nums.size())
            return false;
        if(dp[i][sum]!=-1)
            return dp[i][sum];
        return dp[i][sum] = solve(nums,sum-nums[i],i+1,dp) || solve(nums,sum,i+1,dp);
    }
    bool canPartition(vector<int>& nums) {
        int sum=accumulate(nums.begin(),nums.end(),0);
        if(sum%2!=0)
            return false;
        sum=sum/2;
        vector<vector<int>>dp(nums.size(),vector<int>(sum+1,-1));
        return solve(nums,sum,0,dp);
    }
};