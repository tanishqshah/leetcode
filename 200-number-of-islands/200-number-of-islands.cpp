class Solution {
public:
    void change(vector<vector<char>>&grid,int i,int j){
        if(i>=grid.size() || j>=grid[0].size() || i<0 || j<0 || grid[i][j]=='0')
            return ;
        grid[i][j]='0';
        change(grid,i+1,j);
        change(grid,i,j+1);
        change(grid,i-1,j);
        change(grid,i,j-1);
    }
    int numIslands(vector<vector<char>>& grid) {
        int ans=0;
        if(grid.size()==1 && grid[0].size()==1){
            if(grid[0][0]=='1')
                return 1;
            else 
                return 0;
        }
        
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]=='1'){
                    ans++;
                    change(grid,i,j);
                }
            }
        }
        return ans;
    }
};