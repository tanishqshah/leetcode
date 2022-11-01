int dp[101][101][101][27];

class Solution {
        
    int compress(int i, int count, int prev, int k, string &s) {
        if(k < 0)
            return 1e9;
        if(i >= s.length())
            return 0;
        
        if(dp[i][count][k][prev] != -1)
            return dp[i][count][k][prev];
            
        int exclude = compress(i+1, count, prev, k-1, s);
        int include = 0;
        if(s[i]-'a' == prev) {
            if(count == 1 || count == 9 || count == 99)
                include += 1;
            include += compress(i+1, count+1, prev, k, s);
        } else {
            include = 1 + compress(i+1, 1, s[i]-'a', k, s);
        }
        
        return dp[i][count][k][prev] = min(exclude, include);
    }
    
public:
    int getLengthOfOptimalCompression(string s, int k) {
        // count = count of continous char
        // dp[i][count][k][prev]
        memset(dp, -1, sizeof(dp));
        
        return compress(0, 0, 26, k, s);
    }
};
