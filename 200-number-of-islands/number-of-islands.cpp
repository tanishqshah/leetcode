class Solution {
public:
    void check(vector<vector<char>>& grid,int i,int j){
        if(i<0 || i>=grid.size() || j<0 || j>=grid[i].size() || grid[i][j]=='0')
            return ;
        grid[i][j]='0';
        check(grid,i,j+1);
        check(grid,i+1,j);
        check(grid,i-1,j);
        check(grid,i,j-1);
    }
    int numIslands(vector<vector<char>>& grid) {
        int row = grid.size();
        int col = grid[0].size();

        // vector<vector<int>>vis(row,vector<int>(col,0));
        int count=0;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]=='1'){
                    check(grid,i,j);
                    count++;
                }
            }
        }
        return count;
    }
};