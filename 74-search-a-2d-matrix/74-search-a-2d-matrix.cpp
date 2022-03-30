class Solution {
public:
    bool searchMatrix(vector<vector<int>>& arr, int b) {
        int m=arr.size();
        int n=arr[0].size();
        for(int i=0;i<m;i++)
        {
            if(arr[i][n-1]>=b && arr[i][0]<=b)
            {
                int l=0;
                int r=n-1;
                while(l<=r)
                {
                    int mid=l+r;
                    mid=mid/2;
                    if(arr[i][mid]>b)
                        r=mid-1;
                    else if(arr[i][mid]<b)
                        l=mid+1;
                    else
                        return true;
                }
                break;
            }
            
        }
        return false;
    }
};