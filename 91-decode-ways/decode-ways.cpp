class Solution {
public:
    int numDecodings(string s) {
        if(s.empty() || s[0] == '0') return 0; 
        int n = s.length();
        vector<int>dp(s.length()+1,0);
        dp[0]=1;
        dp[1]=(s[0]!='0') ? 1 : 0;
        for(int i=2;i<=s.length();i++){
            if(s[i-1]!='0'){
                dp[i]=dp[i]+dp[i-1];
            }
            int number = (s[i - 2] - '0') * 10 + (s[i - 1] - '0');
            if (number >= 10 && number <= 26) {
                dp[i] += dp[i - 2];
            }
        }
        return dp[n];
    }
};