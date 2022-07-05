class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        map<int,bool> mp;
        for(auto x:nums)
            mp[x]=false;
        for(auto x:nums)
        {
           if(mp.find(x-1)==mp.end())
           {
               mp[x]=true;
           }
        }
        int maxs=0;
        for(auto x:mp)
        {
            if(x.second==true)
            {
                int i=1;
                while(mp.find(x.first+i)!=mp.end())
                {
                    i++;
                }
                maxs=max(maxs,i);
            }
        }
        return maxs;
    }
};