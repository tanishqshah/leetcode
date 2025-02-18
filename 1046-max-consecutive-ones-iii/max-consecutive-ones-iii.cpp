class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int maxi = 0;
        int count=0;
        int zeroCount=0;
        int left=0;
        for(int i=0;i<nums.size();i++){
            nums[i]==1 ? count++ : zeroCount++;
            if(zeroCount<=k){
                maxi=max(maxi,i-left+1);
            }
            else{
                while(k<zeroCount){
                    if(nums[left]==0)
                        zeroCount--;
                    left++;
                }
            }
        }

        return maxi;
    }
};