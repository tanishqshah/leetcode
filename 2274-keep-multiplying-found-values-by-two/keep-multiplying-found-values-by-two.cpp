class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        unordered_map<int,int>mp;
        for(auto i : nums){
            mp[i]++;
        }
        while(true){
            if(mp[original]>0){
                original = original * 2;
            }
            else{
                return original;
            }
        }
        return original;
    }
};