class Solution {
public:
    int candy(vector<int>& nums) {
        int ans=0;
        vector<int>left(nums.size(),1);
        vector<int>right(nums.size(),1);
        int n=nums.size();
        for(int i=1;i<n;i++){
            if(nums[i]>nums[i-1]){
                left[i]=left[i-1]+1;
            }
        }
        for(int j=n-2;j>=0;j--){
            if(nums[j]>nums[j+1])
                right[j]=right[j+1]+1;
        }
        for(int i=0;i<nums.size();i++){
            ans=ans+max(left[i],right[i]);
        }
        return ans;
    }
};