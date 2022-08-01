class Solution {
public:
    double average(vector<int>& nums) {
        int maxi=INT_MIN;
        int mini=INT_MAX;
        double sum=0;
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
            if(nums[i]<mini)
                mini=nums[i];
            if(nums[i]>maxi)
                maxi=nums[i];
        }
        sum=sum-maxi-mini;
        double ans=sum/(nums.size()-2);
        return ans;
    }
};