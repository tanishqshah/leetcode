class Solution {
public:
    int minimumTime(int n, vector<vector<int>>& relations, vector<int>& time) {
        vector<int>finishTime(n,0);
        vector<vector<int>>adj(n);
        vector<int>indegree(n,0);
        for(int i=0;i<relations.size();i++){
            adj[relations[i][0]-1].push_back(relations[i][1]-1);
            indegree[relations[i][1]-1]++;
        }
        queue<int>q;
        for(int i=0;i<n;i++){
            if(indegree[i]==0){
                q.push(i);
                finishTime[i]=time[i];
            }
        }

        while(!q.empty()){
            int u = q.front();
            q.pop();

            for(int v : adj[u]){
                finishTime[v] = max(finishTime[v],finishTime[u]+time[v]);
                if(--indegree[v]==0)
                    q.push(v); 
            }
        }
        int answer=0;
        for(auto i : finishTime){
            answer = max(answer,i);
        }
        return answer;
    }
};