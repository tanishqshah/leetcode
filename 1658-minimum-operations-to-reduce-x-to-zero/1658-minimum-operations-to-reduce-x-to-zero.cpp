class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        if(x<nums[0] && x<nums[nums.size()-1])
            return -1;
        int n=nums.size();
        int sum=0;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            sum=sum+nums[i];
            mp[sum]=i;
        }
        if(x>sum)
            return -1;
        mp[0]=0;
        int lon=0;
        sum=sum-x;
        int val=0;
        for(int i=0;i<n;i++){
            val=val+nums[i];
            if(mp.count(val-sum)){
                if(val-sum==0)
                    lon=max(lon,i-mp[val-sum]+1);
                else
                    lon=max(lon,i-mp[val-sum]);
                    
            }
        }
        return lon==0 ? (sum==0 ? n :-1 ) : n-lon;
    }
};
