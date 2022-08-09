class Solution {
public:
    int numFactoredBinaryTrees(vector<int>& arr) {
        long ans=0;
        long mod=pow(10,9)+7;
        sort(arr.begin(),arr.end());
        unordered_map<int,long>dp;
        for(int i=0;i<arr.size();i++){
            dp[arr[i]]=1;
            for(int j=0;j<i;j++){
                if(arr[i]%arr[j]==0){
                    dp[arr[i]]=(dp[arr[i]]+dp[arr[j]]*dp[arr[i]/arr[j]])%mod;
                }
            }
            ans=(ans+dp[arr[i]])%mod;
        }
        return ans;
    }
};