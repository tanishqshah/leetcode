class Solution {
public:
    void change(vector<vector<int>>&grid , int i , int j){
        if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size() || grid[i][j]!=1)
            return;
        grid[i][j]=2;
        change(grid,i+1,j);        
        change(grid,i-1,j);
        change(grid,i,j+1);
        change(grid,i,j-1);

    }
    int numEnclaves(vector<vector<int>>& grid) {
        for(int i=0;i<grid.size();i++){        
            if(i==0 || i==grid.size()-1){
                for(int j=0;j<grid[0].size();j++){
                        change(grid,i,j);
                }
            }
            else{
                change(grid,i,0);
                change(grid,i,grid[0].size()-1);

            }
        }
        int count=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1)
                    count++;
            }
        }
        return count;
    }
};