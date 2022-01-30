class Solution {
    void solve(vector<vector<int>>&ans,vector<int>&res,int n,int k,int index)
    {
        if(res.size()==k)
            ans.push_back(res);
        if(res.size()>k)
            return;
        for(int i=index;i<=n;i++)
        {
            res.push_back(i);
            solve(ans,res,n,k,i+1);
            res.pop_back();
        }
    }
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>ans;
        vector<int>res;
        solve(ans,res,n,k,1);
        return ans;
        
    }
};