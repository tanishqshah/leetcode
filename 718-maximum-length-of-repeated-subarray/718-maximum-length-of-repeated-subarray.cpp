class Solution {
public:
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        int dp[nums1.size()+1][nums2.size()+1];
        int ans=0;
        for(int i=0;i<=nums1.size();i++){
            for(int j=0;j<=nums2.size();j++){
                if(i==0 || j==0){
                    dp[i][j]=0;
                    continue;    
                    }   
                if(nums1[i-1]==nums2[j-1])
                    dp[i][j]=1+dp[i-1][j-1];
                else
                    dp[i][j]=0;
                ans=max(ans,dp[i][j]);
            }
        }
        return ans;
    }
};