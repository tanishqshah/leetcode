class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int m1=INT_MAX;
        int m2=INT_MAX;
        
        for(int i=0 ; i<nums.size(); i++){
            if(nums[i]<=m1)
                m1=nums[i];
            else if(nums[i]<=m2){
                m2=nums[i];
            }
            else{
                return true;
            }
        }
        
        return false;
    }
};