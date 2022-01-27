class Solution {
public:
    int search(vector<int>& arr, int a) {
        int x=0,y=arr.size()-1;
        while(x<=y)
        {
            int mid=x+y;
            mid=mid/2;
            if(arr[mid]==a)
                return mid;
            else if(arr[mid]>a)
                y=mid-1;
            else
                x=mid+1;
        }
        
        return -1;
    }
};