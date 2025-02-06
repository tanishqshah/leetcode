class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        unordered_map<int,int>mp;
        int ans=0;
        for(int i=0;i<nums.size();i++)
            for(int j=i+1;j<nums.size();j++)
                ans=ans+8*mp[nums[i]*nums[j]]++;
        return ans;
    }
};