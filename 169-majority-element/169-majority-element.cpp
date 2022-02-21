class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans=0;
        int count=1;
        ans=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]==ans)
                count++;
            else
                count--;
            if(count<0){
                ans=nums[i];
                count=1;
            }
        }
        return ans;
    }
};