class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int x=grid.size();
        int y=grid[0].size();
        vector<int>v;
        for(int i=0;i<x;i++){
            for(int j=0;j<y;j++){
                v.push_back(grid[i][j]);
            }
        }
        int n=k%v.size();
        
        reverse(v.begin(), v.begin()+v.size()-n);
        reverse(v.begin()+v.size()-n, v.end());
        reverse(v.begin(), v.end());
        int z=0;
        vector<vector<int>>ans(x,vector<int>(y,0));
        for(int i=0;i<x;i++){
            for(int j=0;j<y;j++){
                ans[i][j]=v[z];
                z++;
            }
        }
        return ans;
        
    }
};