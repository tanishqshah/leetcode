class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i : nums){
            mp[i]++;
            if(mp[i]>1)
                return true;
        }
        return false;
    }
};