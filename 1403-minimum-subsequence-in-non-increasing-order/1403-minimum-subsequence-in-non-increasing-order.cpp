class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
        }
        int check=0;
        vector<int>ans;
        for(int i=nums.size()-1;i>=0;i--){
            check=check+nums[i];
            sum=sum-nums[i];
            ans.push_back(nums[i]);
            if(check>sum)
                break;
        }
        return ans;
    }
};