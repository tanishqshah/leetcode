class Solution {
public:
    vector<pair<int, int>> dir{{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    void change(vector<vector<char>>& grid,int row,int col){
        grid[row][col] = '2';
        for(auto d : dir) {
            int next_row = row + d.first;
            int next_col = col + d.second;
            if(next_row >= 0 && next_row < grid.size() && next_col >= 0 && next_col < grid[0].size() && grid[next_row][next_col] == '1') {
                change(grid, next_row, next_col);
            }   
        }
        
        // grid[row][col]='0';
        // if(row<0 || row>=grid.size() || col<0 && col>=grid[0].size() || grid[row][col]!='1')
        //     return;
        // else{
        //     change(grid,row+1,col);
        //     change(grid,row-1,col);
        //     change(grid,row,col+1);
        //     change(grid,row,col-1);
        // }
        
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