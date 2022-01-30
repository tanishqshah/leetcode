class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        vector<int>ans;
        for(auto i : mp){
            if(i.second==2){
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};