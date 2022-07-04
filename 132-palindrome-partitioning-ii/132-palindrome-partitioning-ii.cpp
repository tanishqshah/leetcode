class Solution {
public:
    bool isPalindrome (string & s, int i, int j){
        while(i<j){
            if(s[i]!=s[j]) return false;
            i++; j--;
        }
        return true;
    }
    

    int solve (string & s, int i, int j, vector<vector<int>> & dp){    
        
        if(i>=j or isPalindrome(s, i, j)) return 0;
        
        if(dp[i][j]!=-1) return dp[i][j];
        
        int ans = INT_MAX;
        
        for(int k=i; k<j; k++){

            if(isPalindrome(s, i, k)){                         
                int temp = solve (s, k+1, j, dp) + 1;
                ans = min (ans, temp);
            }
        }
        
        return dp[i][j] = ans;
    }
    
    int minCut(string s) {
        int n = s.length();
        vector<vector<int>> dp (n+1, vector<int> (n+1, -1));
            
        return solve (s, 0, n-1, dp);
    }
};