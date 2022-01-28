class Solution {
public:
    int searchInsert(vector<int>& arr, int b) {
        int x=0;
        int y=arr.size()-1;
        int ans=-1;
        while(x<=y)
        {
            int mid=(x+y)/2;
            if(arr[mid]==b)
                return mid;
            if(arr[mid]>b)
            {
                ans=mid;
                y=mid-1;
            }
            else
            {
                ans=mid+1;
                x=mid+1;
            }
        }
        return ans;
    }
};