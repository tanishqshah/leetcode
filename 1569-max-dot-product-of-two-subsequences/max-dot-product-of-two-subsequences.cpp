class Solution {
public:
    int maxDotProduct(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>>dp(nums1.size()+1,vector<int>(nums2.size()+1,-1000000));
        int n=nums1.size();
        int m=nums2.size();
        for(int i=1;i<=n;++i){
            for(int j=1;j<=m;++j){
                int soFar = max(dp[i - 1][j], dp[i][j - 1]);
				int current = nums1[i - 1] * nums2[j - 1];
				int maxCurr = max(current, current + dp[i - 1][j - 1]);
				dp[i][j] = max(maxCurr, soFar);
            }
        }
        return dp[n][m];
    }
};