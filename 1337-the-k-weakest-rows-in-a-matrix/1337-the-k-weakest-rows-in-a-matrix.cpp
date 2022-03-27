class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& M, int K) {
        int x=M.size();
        int y=M[0].size();
        set<pair<int,int>>st;
        for(int i=0;i<x;i++)
        {
            int cnt=count(M[i].begin(),M[i].end(),1);
            st.insert({cnt,i});
        }
        vector<int>ans;
        for(auto it:st){
            if(K==0)
            {
                break;
            }
            ans.push_back(it.second);
            K--;
        }
        return ans;
    }
};