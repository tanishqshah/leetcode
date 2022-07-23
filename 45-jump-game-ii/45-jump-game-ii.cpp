class Solution {
public:
    int jump(vector<int>& nums) {
        int maxi=0;
        int curr=0;
        if(nums.size()==1)
            return 0;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            maxi=max(maxi,nums[i]+i);
            if(maxi>=nums.size()-1){
                return ans+1;
            }
            if(i==curr){
                curr=maxi;
                ans++;
            }
        }
        return ans;
    }
};