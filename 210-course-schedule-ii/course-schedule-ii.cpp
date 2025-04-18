class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>>& pre) {
        vector<int>indegree(n,0);
        vector<vector<int>>adj(n);
        for(auto i : pre){
            adj[i[1]].push_back(i[0]);
            indegree[i[0]]++;
        }
        queue<int>q;
        vector<int>ans;
        for(int i=0;i<n;i++){
            cout<<i<<" ";
            if(indegree[i]==0)
                q.push(i);
        }

        while(!q.empty()){
            int cur = q.front();
            q.pop();
            ans.push_back(cur);
            for(auto i : adj[cur]){
                if(--indegree[i]==0){
                    q.push(i);
                }
            }
        }
        return (ans.size()==indegree.size()) ? ans : vector<int>();
    }
};