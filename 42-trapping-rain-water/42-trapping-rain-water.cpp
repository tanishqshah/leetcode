class Solution {
public:
    int trap(vector<int>& nums) {
        int n=nums.size();
        vector<int>left(n);
        vector<int>right(n);
        left[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            left[i]=max(left[i-1],nums[i]);
        }
        right[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            right[i]=max(right[i+1],nums[i]);
        }
        int ans=0;
        for(int i=0;i<nums.size();i++){
            ans=ans+min(left[i],right[i])-nums[i];
        }
        return ans;
    }
};