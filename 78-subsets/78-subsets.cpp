class Solution {
public:
    void solve(vector<vector<int>>&ans,vector<int>&push,int ind,vector<int>&nums)
    {
        ans.push_back(push);
        for(int i=ind;i<nums.size();i++)
        {
            push.push_back(nums[i]);
            solve(ans,push,i+1,nums);
            push.pop_back();
        }
        
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>push;
        solve(ans,push,0,nums);
        return ans;
    }
};