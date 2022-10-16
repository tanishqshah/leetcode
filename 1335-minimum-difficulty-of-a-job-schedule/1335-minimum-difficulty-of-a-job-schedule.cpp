class Solution {
public:
    int dp[1001][12];
    int helper(vector<int>& arr,int left,int right,int d){
        if(d == 1){
            return *max_element(arr.begin()+left,arr.end());
        }
        if(dp[left][d] != -1)return dp[left][d];
        int curr = INT_MIN;
        int res = INT_MAX;
        for(int i = left;i<=right-d;i++){
            curr = max(curr,arr[i]);
            res = min(res,curr+helper(arr,i+1,right,d-1));
        }
        return dp[left][d] = res;
    }
    int minDifficulty(vector<int>& arr, int d) {
        int n = arr.size();
        if(n<d)return -1;
        memset(dp,-1,sizeof(dp));
        return helper(arr,0,n,d);
    }
};