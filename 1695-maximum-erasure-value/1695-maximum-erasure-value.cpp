class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int ans=0;
        int sum=0;
        unordered_map<int,int>mp;
        for(int i=0,j=0;j<nums.size();j++){
            while (mp.find(nums[j]) != mp.end()) {
                mp.erase(nums[i]);
                sum -= nums[i];
                i++;
            }
            sum=sum+nums[j];
            mp[nums[j]]++;
            // mp[nums[i]]=i;
            ans=max(ans,sum);
        }
        return ans;
    }
};