class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<int>ans;
        vector<int>check(n,0);
        for(int i=0;i<edges.size();i++){
            check[edges[i][1]]++;
        }
        for(int i=0; i<n ;i++){
            if(check[i]==0)
                ans.push_back(i);
        }
        return ans;
    }
};