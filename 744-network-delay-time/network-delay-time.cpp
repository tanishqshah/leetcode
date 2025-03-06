class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<pair<int, int>> adj[101];
        for(int i=0;i<times.size();i++){
            adj[times[i][0]].push_back({times[i][1],times[i][2]});
        }

        vector<int>distance(n+1,INT_MAX);
        distance[k]=0;
        queue<pair<int,int>>q;
        q.push({k,0});
        while(!q.empty()){
            pair<int,int>top = q.front();
            q.pop();
            int v = top.first;
            int d = top.second;
            for(auto i : adj[v]){
                if(d+i.second<distance[i.first]){
                    distance[i.first] = d+i.second;
                    q.push({i.first,d+i.second});
                }
            } 
        }
        int answer=0;
        for(int i=1;i<distance.size();i++){
            cout<<distance[i]<<" ";
            if(i==k)
                continue;
            else if(distance[i]==INT_MAX)
                return -1;
            else{
                answer=max(answer,distance[i]);
            }
        }
        return answer;
    }
};