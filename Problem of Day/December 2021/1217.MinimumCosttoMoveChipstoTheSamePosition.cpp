https://leetcode.com/problems/minimum-cost-to-move-chips-to-the-same-position/


class Solution {
public:
    int minCostToMoveChips(vector<int>& nums) {
        int odd=0,even=0;
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
                even++;
            else
                odd++;
        }
        if(odd>even)
            return even;
        else
            return odd;
        
    }
};
