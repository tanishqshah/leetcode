class Solution {
public:
    void solve(vector<vector<int>>&ans,int ind,vector<int>&add , vector<int>&nums){
        ans.push_back(add);
        for(int i=ind;i<nums.size();i++){
            add.push_back(nums[i]);
            solve(ans,i+1,add,nums);
            add.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>add;
        solve(ans,0,add,nums);
        return ans;
    }
};