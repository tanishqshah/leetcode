class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int>col(n,0);
        queue<int>q;
        for(int i=0;i<n;i++){
            if(col[i])
                continue;
            col[i]=1;
            q.push(i);
            while(!q.empty()){
                int temp=q.front();
                for(auto x : graph[temp]){
                    if(!col[x]){
                        col[x]=-col[temp];
                        q.push(x);
                    }
                    else if(col[x]==col[temp])
                        return false;
                }
                q.pop();
            }
            
        }
        return true;
    }
};