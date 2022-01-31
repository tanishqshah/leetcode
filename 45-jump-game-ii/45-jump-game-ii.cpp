class Solution {
public:
    int jump(vector<int>& nums) {
        int ans=0;
        int n=nums.size();
        int curr=0,jump=0;
        for(int i=0;i<n-1;i++){
            jump=max(jump,i+nums[i]);
            if(i==curr){
                ans++;
                curr=jump;
            }
        }
        return ans;
    }
};