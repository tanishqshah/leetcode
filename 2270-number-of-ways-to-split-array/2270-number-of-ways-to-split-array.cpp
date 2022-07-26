class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long long ans=0;
        int count=0;
        long long leftsum=0;
        for(int i=0;i<nums.size();i++){
            ans=ans+nums[i];
        }
        for(int i=0;i<nums.size()-1;i++){
            leftsum=leftsum+nums[i];
            ans=ans-nums[i];
            if(leftsum>=ans){
                count++;
            }
            
        }
        return count;
    }
};