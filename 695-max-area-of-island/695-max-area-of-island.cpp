class Solution {
public:
    int findarea(vector<vector<int>>&grid , vector<vector<bool>>&vis , int i, int j){
        int n=grid.size();
        int m=grid[0].size();
        
        if(i>=n || j>=m || i<0 || j<0)
            return 0;
        
        if(grid[i][j]==0 || vis[i][j])
            return 0;
        
        int ans=0;
        vis[i][j]=true;
        
        ans=ans+findarea(grid,vis,i-1,j);
        ans=ans+findarea(grid,vis,i,j-1);
        ans=ans+findarea(grid,vis,i,j+1);
        ans=ans+findarea(grid,vis,i+1,j);
        
        return ans+1;

        
    }
    
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int ans=0;
        vector< vector< bool > > vis( n, vector<bool>( m, false ) );
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1 && vis[i][j]==false){
                    ans=max(ans,findarea(grid,vis,i,j));
                }
            }
        }
        return ans;
    }
};