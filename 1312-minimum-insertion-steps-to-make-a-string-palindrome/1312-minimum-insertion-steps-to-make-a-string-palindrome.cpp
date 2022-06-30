class Solution {
public:
    int lcs(string s,string t){
        int n=s.length();
        int dp[n+1][n+1];
        for(int i=0;i<=n;i++){
            for(int j=0;j<=n;j++){
                if(i==0 || j==0){
                    dp[i][j]=0;
                    continue;
                }
                if(s[i-1]==t[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return (n-dp[n][n]);
    }
    int minInsertions(string str) {
        string t=str;
        reverse(str.begin(), str.end());
        return lcs(t,str);
    }
};