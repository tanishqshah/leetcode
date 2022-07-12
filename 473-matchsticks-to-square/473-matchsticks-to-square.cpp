class Solution {
public:
    bool solve(vector<int>&vis , int k , int indx , int val , int sum , vector<int>&nums){
        if(val==sum){
            return solve(vis,k-1,0,0,sum,nums);
        }
        if(k==1)
            return true;
        if(val>sum)
            return false;
        bool ans=false;
        for(int i=indx;i<nums.size();i++){
            if(vis[i])
                continue;
            vis[i]=1;
            ans =ans || solve(vis,k,i,val+nums[i],sum,nums);
            vis[i]=0;   
        }
        return ans;
    }
    bool makesquare(vector<int>& nums) {
        int sum=0;
        vector<int>vis(nums.size(),0);
        vector<int>arr(4,0);
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
        }
        if(sum%4!=0)
            return 0;
        return solve(vis,4,0,0,sum/4,nums);
    }
};


