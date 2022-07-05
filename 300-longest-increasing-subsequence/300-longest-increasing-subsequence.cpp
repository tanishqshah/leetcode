class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int>dp(nums.size(),1);
        int ans=1;
        for(int i=1;i<nums.size();i++){
            for(int j=0;j<i;j++){
                if(dp[i]<dp[j]+1 && nums[i]>nums[j]){
                    dp[i]=dp[j]+1;
                }
            }
            ans=max(ans,dp[i]);
        }
        return ans;
    }
};