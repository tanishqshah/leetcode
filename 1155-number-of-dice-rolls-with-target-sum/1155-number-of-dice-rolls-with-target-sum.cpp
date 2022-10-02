class Solution {
public:

    int mod = 1e9+7;
    int solve(int n,int k,int target,int ind,vector<vector<int>>&dp){
    
        if(ind == n ){
            if(target == 0){
                return 1;
            }
            else{
                return 0;
            }
        }


        int &ans = dp[ind][target];
        if(ans != -1){
            return ans;
        }

        int store = 0;
        for(int i=1;i<=k;i++){
            if(target-i>=0){
                store = (store%mod + solve(n,k,target-i,ind+1,dp)%mod)%mod;
            }
        }
        return ans = store%mod;
    }

    int numRollsToTarget(int n, int k, int target) {
        vector<vector<int>>dp(n,vector<int>(target+1,-1));
        return solve(n,k,target,0,dp);
    }
};