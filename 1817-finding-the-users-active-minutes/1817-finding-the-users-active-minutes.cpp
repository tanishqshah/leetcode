class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& nums, int k) {
        vector<int>ans(k,0);
        unordered_map<int,int>mp;
        sort(nums.begin(),nums.end());
        nums.erase(unique(nums.begin(), nums.end()), nums.end());
        for(int i=0;i<nums.size();i++){
            mp[nums[i][0]]++;
        }
        for(auto i : mp){
            ans[i.second-1]++;
        }
        
        return ans;
    }
};