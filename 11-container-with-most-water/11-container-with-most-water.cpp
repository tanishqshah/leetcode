class Solution {
public:
    int maxArea(vector<int>& arr) {
        int low=0;
        int high=arr.size()-1;
        int area;
        int max=-1;
        while(low<high)
        {
            area=abs(high-low);
            area=area*min(arr[high],arr[low]);
            if(max<area)
                max=area;
            if(arr[high]<arr[low])
                high--;
            else
                low++;
            
        }
        return max;
    }
};