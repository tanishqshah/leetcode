class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
    int low=0;
    int high=nums.size()-1;
        vector<int> ans;
        int a=-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(nums[mid]==target)
            {
                a=mid;
               high=mid-1;
            }
            else if(nums[mid]<target)
                low=mid+1;
            else
                high=mid-1;
        }
     low=0;
     high=nums.size()-1;
        int b=-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(nums[mid]==target)
            {
                b=mid;
               low=mid+1;
            }
            else if(nums[mid]<target)
                low=mid+1;
            else
                high=mid-1;
        }   
        
        return {a,b};
    }
};