class Solution {
public:
    vector<int> twoSum(vector<int>& a, int b) {
        unordered_map<int,int>mp;
        vector<int>ans;
        for(int i=0;i<a.size();i++)
        {
            int x=b-a[i];
            if(mp.find(x)==mp.end())
                mp[a[i]]=i+1;
            else
            {
                ans.push_back(mp[x]);
                ans.push_back(i+1);
            }
            
        }
        return ans;
        
    }
};
