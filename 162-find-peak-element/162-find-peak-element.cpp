class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if(nums.empty()||nums.size()==1) 
           return 0;
        if(nums[0]>nums[1]) 
            return 0;
        if(nums[nums.size()-1]>nums[nums.size()-2]) 
            return nums.size()-1;
        
        int mid=0,low=1,high=nums.size()-2;
        while(low<=high)
        {
            mid=low+(high-low)/2;
            if(nums[mid]>nums[mid-1]&&nums[mid]>nums[mid+1])
            {
                break;
            }
            else if(nums[mid]<nums[mid-1])
            {
                high=mid-1;
            }
            else if(nums[mid]<nums[mid+1])
            {
                low=mid+1;
            }
        }
       return mid;
        
    }     
};