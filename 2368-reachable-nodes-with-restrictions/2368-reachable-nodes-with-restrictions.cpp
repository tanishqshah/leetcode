class Solution {
public:
    int reachableNodes(int n, vector<vector<int>>& edges, vector<int>& restricted) {
        vector<vector<int>>adj(n);
        
        for(int i=0;i<edges.size();i++){
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        
        set<int>stk;
        for(auto ele:restricted) stk.insert(ele);
        
        if(stk.count(0))return 0;
        queue<int>q;
        vector<int>vis(n,0);
        
        q.push(0);
        vis[0]=1;
        
        int cnt=0;
        while(q.size()){
            int node=q.front();
            q.pop();
            cnt++;
            
            
            for(auto ele:adj[node]){
                if(vis[ele]==0 and stk.count(ele)==0){
                    q.push(ele);
                    vis[ele]=1;
                }
            }
        }
        return cnt;
    }
};