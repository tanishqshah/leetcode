class Solution {
public:
    int findparent(vector<int>& par,int u)
    {
        if(u==par[u])
        {
            return u;
        }
        return par[u]=findparent(par,par[u]);
    }
    bool equationsPossible(vector<string>& equations) 
    {
        vector<int> par(26);
        for(int i=0;i<26;i++)
        {
            par[i]=i;
        }
        for(auto e:equations)
        {
            if(e[1]=='=')
            {
                par[findparent(par,e[0]-'a')]=findparent(par,e[3]-'a');
            }
        }
        for(auto e:equations)
        {
            if(e[1]=='!')
            {
                if(findparent(par,e[0]-'a')==findparent(par,e[3]-'a'))
                    return false;
            }
        }
        return true;
        
    }
};