class Solution {
public:
    int minimumTotal(vector<vector<int>>& arr) {
        int ans=INT_MAX;
        if(arr.size()==1){
            return arr[0][0];
        }
        for(int i=1;i<arr.size();i++){
            for(int j=0;j<arr[i].size();j++){
                if(j==0){
                    arr[i][j]=arr[i-1][j]+arr[i][j];
                }
                else if(j==arr[i].size()-1){
                    arr[i][j]=arr[i][j]+arr[i-1][j-1];
                }
                else{
                    arr[i][j]=arr[i][j]+min(arr[i-1][j],arr[i-1][j-1]);
                }
                if(i==arr.size()-1){
                    ans=min(ans,arr[i][j]);
                }
            }
        }
        return ans;
    }
};