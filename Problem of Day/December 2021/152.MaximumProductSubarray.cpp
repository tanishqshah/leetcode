https://leetcode.com/problems/maximum-product-subarray/

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans=INT_MIN;
        int prod=1;
        for(int i=0;i<nums.size();i++){
            prod=prod*nums[i];
            if(ans<prod)
                ans=max(ans,prod);
            if(nums[i]==0)
                prod=1;
            
        }
        // int ans=INT_MIN;
        prod=1;
        for(int i=nums.size()-1;i>=0;i--){
            prod=prod*nums[i];
            if(ans<prod)
                ans=max(ans,prod);
            if(nums[i]==0)
                prod=1;
            
        }
        return ans;
    }
};
