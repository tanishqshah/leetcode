class Solution {
public:
    bool solve(string s1,string s2,string s3,int i,int j,int k,vector<vector<int>> &dp){
        if(i==s1.length() && j==s2.length() && k == s3.length()){
            return true;
        }
        if(k==s3.length()){
            return false;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        bool first=false,second=false;
        if(i<s1.length() && s1[i]==s3[k]){
            first = solve(s1,s2,s3,i+1,j,k+1,dp);
        }
        if(j<s2.length() && s2[j]==s3[k]){
            second = solve(s1,s2,s3,i,j+1,k+1,dp);
        }
        return dp[i][j] = first || second;
    }
    bool isInterleave(string s1, string s2, string s3) {
        vector<vector<int>> dp(s1.length() + 1, vector<int>(s2.length() + 1, -1));
        return solve(s1,s2,s3,0,0,0,dp);
    }
};