class Solution {
public:
    static int maxSumDivThree(vector<int>& nums) {
        const int n=nums.size(), minus=-1e9;
        int dp[2][3]={ {0, 0, 0}, {0, minus, minus}};
        for(int i=0; i<n; i++){
            const int x=nums[i];
            for(int mod=0; mod<3; mod++){
                int modPrev=mod-x%3; modPrev+=(-(modPrev<0)) & 3;
                const int take=x+dp[(i+1)&1][modPrev];
                const int skip=dp[(i+1)&1][mod];
                dp[i&1][mod]=max(take, skip);
            }
        }
        return max(0, dp[(n-1)&1][0]);
    }
};