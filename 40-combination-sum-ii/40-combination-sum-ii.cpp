class Solution {
public:
    void get(vector<vector<int>>&res , vector<int>&ans , vector<int> &nums , int x , int index){
        if(x==0){
            res.push_back(ans);
            return ;
        }
        if(x<0)
            return;
        for(int i=index;i<nums.size();i++){
                if(i==index || nums[i]!=nums[i-1]){
                ans.push_back(nums[i]);
                get(res,ans,nums,x-nums[i],i+1);
                ans.pop_back();
                }
        }
    }
    
    vector<vector<int>> combinationSum2(vector<int>& nums, int x) {
        vector<vector<int>>res;
        vector<int>ans;
        sort(nums.begin(),nums.end());
        get(res,ans,nums,x,0);
        return res;
    }
};