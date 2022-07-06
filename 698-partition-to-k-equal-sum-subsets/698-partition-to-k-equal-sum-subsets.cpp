class Solution {
public:
    bool solve(vector<int>&nums,int index,int k,int sub,int tar,vector<bool>&vis){
        if(k==0)
            return true;
        if(sub>tar)
            return false;
        if(tar==sub)
            return solve(nums,0,k-1,0,tar,vis);
        bool res=false;
        for(int i=index;i<nums.size();i++){
            if(vis[i])
                continue;
            vis[i]=true;
            res= res || solve(nums,i+1,k,sub+nums[i],tar,vis);
            vis[i]=false;
        }
        
        return res;
    }
    bool canPartitionKSubsets(vector<int>& nums, int k) {
        int sum=0,maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
            maxi=max(maxi,nums[i]);
        }
        if(sum%k!=0 || maxi>sum/k)
            return 0;
        
        vector<bool>vis(nums.size(),0);
        return solve(nums,0,k,0,sum/k,vis);
    }
};