class Solution {
public:
    
    void help(vector<vector<int>> &vec,int target,vector<int> &v,int index,vector<int> &h)
    {
       if(target==0)
       {
            vec.push_back(h);
            return;
       }
        if(index==v.size()||target<0)
        {
            return;
        }
        
        for(int i=index;i<v.size();i++)
        {
            h.push_back(v[i]);
            help(vec,target-v[i],v,i,h);
            h.pop_back();
        }
        
        
    }
    vector<vector<int>> combinationSum(vector<int>& v, int target) {
        vector<vector<int>> vec;
        vector<int>h;
        help(vec,target,v,0,h);
        return vec;
    }
};