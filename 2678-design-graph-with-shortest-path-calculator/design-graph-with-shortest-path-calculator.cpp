typedef pair<int, int> pii; 
class Graph {
private:
    vector<vector<pair<int, int>>> adj;

public:
    int totalNode;
    Graph(int n, vector<vector<int>>& edges) {
        totalNode=n;
        adj.resize(n+1);
        for (auto &e : edges) {
            adj[e[0]].push_back({e[1], e[2]});
        }
        // adj = adjMatrix;
    }
    
    void addEdge(vector<int> e) {
        adj[e[0]].push_back({e[1], e[2]});
    }
    
    int shortestPath(int node1, int node2) {
        int src = node1;
        priority_queue<pair<int, int>,vector<pair<int, int>>,greater<pair<int, int>>>pq;
        vector<int> dist(totalNode + 1, INT_MAX);
        dist[src]=0;
        pq.push({0,src});

        while(!pq.empty()){
            int d = pq.top().first;
            int u = pq.top().second;
            pq.pop();
            if(d > dist[u])
                continue;

            for(auto node : adj[u]){
                int edge = node.first;
                int weight = node.second;

                if(dist[u]+weight<dist[edge]){
                    dist[edge]=dist[u]+weight;
                    pq.push({dist[edge],edge});
                }
            }
        }
        return dist[node2]==INT_MAX ? -1 : dist[node2];
    }
};

/**
 * Your Graph object will be instantiated and called as such:
 * Graph* obj = new Graph(n, edges);
 * obj->addEdge(edge);
 * int param_2 = obj->shortestPath(node1,node2);
 */