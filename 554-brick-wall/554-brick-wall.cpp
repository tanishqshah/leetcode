class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
    unordered_map<int,int>gap;
    int n=wall.size()  ;
      
    for(int row=0;row<n;row++){
        int sum=0;
        for(int col=0;col<wall[row].size()-1;col++){
            sum+=wall[row][col];
            gap[sum]++;
         } 
    }
        
    int res=n;
    for(auto it:gap) 
        res=min(res,n-it.second); 
    return res;
    }
};