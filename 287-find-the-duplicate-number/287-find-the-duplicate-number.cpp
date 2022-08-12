class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int ans=-1;
        for(int i=0;i<nums.size();i++){
            nums[abs(nums[i])]=-nums[abs(nums[i])];
            if(nums[abs(nums[i])]>0){
                ans = abs(nums[i]);
                break;
            }
        }
        return ans;
    }
};