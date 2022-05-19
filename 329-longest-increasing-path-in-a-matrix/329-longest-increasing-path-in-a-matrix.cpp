class Solution {
public:
        
    // DP Approach - Memoization
    int dfs(vector<vector<int>>& matrix,int i,int j,int prev,vector<vector<int>> &dp)
    {
        if(i<0 || j<0 || i>=matrix.size() || j>=matrix[0].size() || matrix[i][j]<=prev)
            return 0;
        
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        int d1=dfs(matrix,i-1,j,matrix[i][j],dp);
        int d2=dfs(matrix,i,j-1,matrix[i][j],dp);
        int d3=dfs(matrix,i,j+1,matrix[i][j],dp);
        int d4=dfs(matrix,i+1,j,matrix[i][j],dp);
        
        return dp[i][j]=1+max(d1,max(d2,max(d3,d4)));
    }
    int longestIncreasingPath(vector<vector<int>>& matrix) 
    {
        int m=matrix.size();
        int n=matrix[0].size();
        
        vector<vector<int>> dp(m,vector<int>(n,-1));
        
        int ans=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                ans=max(ans,dfs(matrix,i,j,-1,dp));
            }
        }
        return ans;
    }
};