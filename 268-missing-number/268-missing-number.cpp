class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]=1;
        }
        for(int i=0;i<=n;i++){
            cout<<i<<endl;
            if(mp[i]!=1)
                return i;
        }
        return n;
    }
};