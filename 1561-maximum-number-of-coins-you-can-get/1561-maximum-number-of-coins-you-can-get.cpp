class Solution {
public:
    int maxCoins(vector<int>& nums) {
        int n=nums.size();
        int x=n/3;
        sort(nums.begin(),nums.end());
        int ans=0;
        for(int i=x;i<nums.size();i++){
            ans=ans+nums[i];
            i++;
        }
        return ans;
    }
};


