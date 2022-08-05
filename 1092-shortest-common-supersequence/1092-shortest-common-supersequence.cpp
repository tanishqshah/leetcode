class Solution {
public:
    string shortestCommonSupersequence(string s, string t) {
        int n1=s.length();
        int n2=t.length();
        int dp[n1+1][n2+1];
        for(int i=0;i<=n1;i++){
            for(int j=0;j<=n2;j++){
                if(i==0 || j==0){
                    dp[i][j]=0;
                    dp[0][0]=1;
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
        string ans="";
        int i=n1;
        int j=n2;
        while(i>0 && j>0){
            if(s[i-1]==t[j-1]){
                ans=s[i-1]+ans;
                i--;
                j--;
            }
            else{
                if(dp[i-1][j]>dp[i][j-1]){
                    ans=s[i-1]+ans;
                    i--;
                }
                else{
                    ans=t[j-1]+ans;
                    j--;
                }
            }
        }
        while(i>0){
            ans=s[i-1]+ans;
            i--;
        }
        while(j>0){
            ans=t[j-1]+ans;
            j--;
        }
        return ans;
    }
};