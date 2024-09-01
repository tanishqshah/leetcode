class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>>result(m,vector<int>(n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0 && j==0)
                    result[i][j]=1;
                else if(i==0)
                    result[i][j]=result[i][j-1];
                else if(j==0)
                    result[i][j]=result[i-1][j];
                else
                    result[i][j]=result[i-1][j]+result[i][j-1];
            }
        }
        return result[m-1][n-1];
    }
};