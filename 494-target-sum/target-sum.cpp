class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int totalSum=0;
        for(int i=0;i<nums.size();i++){
            totalSum=totalSum+nums[i];
        }
        if ((totalSum + target) % 2 != 0 ||  totalSum < abs(target)) return 0;
        int S1 = (totalSum + target) / 2;
        vector<int> dp(S1 + 1, 0);
        dp[0]=1;
        for(auto num : nums){
            for (int j = S1; j >= num; j--) {
                dp[j] += dp[j - num];
            }
            // for(int i=num;i>=S1;i++){
            //     dp[i] = dp[i] + dp[i-num];
            // }
        }
        return dp[S1];
    }
};