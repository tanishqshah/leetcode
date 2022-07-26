class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int left=0;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
        }
        for(int i=0;i<nums.size();i++){
            if(left==sum-nums[i]){
                return i;
            }
            left=left+nums[i];
            sum=sum-nums[i];
        }
        return -1;
    }
};