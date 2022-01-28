class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        mp[nums[0]]=1;
        vector<int>ans;
        for(int i=1 ;i<nums.size();i++){
            int k=target-nums[i];
            if(mp[k]>0){
                ans.push_back(mp[k]);
                ans.push_back(i+1);
                break;
            }
            mp[nums[i]]=i+1;
        }
        return ans;
    }
};