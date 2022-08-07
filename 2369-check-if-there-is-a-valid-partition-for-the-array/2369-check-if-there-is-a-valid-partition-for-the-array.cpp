class Solution {
public:
    bool validPartition(vector<int>& nums) {
        vector<int>vis(nums.size(),0);
        if(nums[0]==nums[1]){
            vis[1]=1;
        }
        if(nums.size()>2){
            if(nums[0]+1==nums[1] && nums[1]+1==nums[2]){
                vis[2]=1;
            }
            if(nums[0]==nums[1] && nums[1]==nums[2])
                vis[2]=1;
        }
        
        for(int i=3;i<nums.size();i++){
            if(nums[i]==nums[i-1] && vis[i-2]==1)
                vis[i]=1;
            if(nums[i]==nums[i-1] && nums[i-1]==nums[i-2] && vis[i-3]==1)
                vis[i]=1;
            if(nums[i]==nums[i-1]+1 && nums[i-1]==nums[i-2]+1 && vis[i-3]==1)
                vis[i]=1;
        }
        
        return vis[nums.size()-1];
    }
};