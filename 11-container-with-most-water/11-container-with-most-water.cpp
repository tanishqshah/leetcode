class Solution {
public:
    int maxArea(vector<int>& nums) {
        int high=nums.size()-1;
        int low=0;
        int ans=0;
        while(low<=high){
            int height=min(nums[low],nums[high]);
            ans=max(ans,height*(high-low));
            if(nums[low]>nums[high]){
                high--;
            }
            else
                low++;
        }
        return ans;
    }
};