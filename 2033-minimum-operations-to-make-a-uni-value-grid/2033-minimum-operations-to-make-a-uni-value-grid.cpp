class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int>arr;
        if(grid.size()==1 && grid[0].size()==1){
            return 0;
        }
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                arr.push_back(grid[i][j]);
            }
        }
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int flag1=0,flag2=0;
        int ans1=0,ans2=0;
        for(int i=0;i<n;i++){
            if((arr[n/2]-arr[i])%x==0){
                ans1=ans1+abs(arr[n/2]-arr[i])/x;
            }
            else{
                ans1=0;
                flag1=1;
            }
            if(abs(arr[n/2-1]-arr[i])%x==0){
                ans2=ans2+abs(arr[n/2-1]-arr[i])/x;
            }
            else{
                ans2=0;
                flag2=1;
            }
        }
        if(flag1==1 && flag2==1)
            return -1;
        else{
            return min(ans1,ans2);
        }
    }
};