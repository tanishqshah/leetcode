class Solution {
public:
    int maxArea(vector<int>& nums) {
        int low=0;
        int high=nums.size()-1;
        int area=0;
        while(low<high){
            int currArea = min(nums[low],nums[high])*(high-low);
            if(nums[low]>nums[high])
                high--;
            else
                low++;
            area = max(currArea,area);
        }
        return area;
    }
};