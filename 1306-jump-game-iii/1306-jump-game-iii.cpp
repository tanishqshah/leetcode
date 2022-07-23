class Solution {
public:
    bool solve(vector<int>&arr,int st,vector<bool>&vis){
        if(st>arr.size()-1 || st<0)
            return false;
        if(vis[st]==1)
            return false;
        vis[st]=1;
        if(arr[st]==0)
            return true;
        return solve(arr,st+arr[st],vis) || solve(arr,st-arr[st],vis);
    }
    bool canReach(vector<int>& arr, int st) {
        vector<bool>vis(arr.size(),false);
        return solve(arr,st,vis);
    }
};