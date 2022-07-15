class Solution {
public:
    int minDistance(string s1, string s2) {
        int dp[s1.length()+1][s2.length()+1];
        for(int i=0;i<=s1.length();i++){
            dp[i][0]=i;
        }
        for(int j=0;j<=s2.length();j++){
            dp[0][j]=j;
        }
        for(int i=1;i<=s1.length();i++){
            for(int j=1;j<=s2.length();j++){
                if(s1[i-1]==s2[j-1]){
                    dp[i][j]=dp[i-1][j-1];
                }
                else{
                    dp[i][j]=1+min(dp[i-1][j],min(dp[i][j-1],dp[i-1][j-1]));
                }
            }
        }
        return dp[s1.length()][s2.length()];
    }
};