class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& nums) {
        sort(nums.begin(),nums.end());
        int ans=1;
        
        int x1=nums[0][0];
        int x2=nums[0][1];
        
        for(int i=1;i<nums.size();i++){
            if(nums[i][0] > x1 && nums[i][1] > x2)
                ans++;
            if(nums[i][1]>x2)
            {
                x1=nums[i][0];
                x2=nums[i][1];
            }
        }
        return ans;
    }
};