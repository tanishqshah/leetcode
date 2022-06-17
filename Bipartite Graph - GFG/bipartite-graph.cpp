// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
	bool isBipartite(int v, vector<int>adj[]){
	    // Code here
	    vector<int>col(v,0);
	    queue<int>q;
	    for(int i=0;i<v;i++){
	        if(col[i]!=0)   
	            continue;
	        col[i]=1;
	        q.push(i);
	        while(!q.empty()){
	            int x=q.front();
	            q.pop();
	            for(auto z : adj[x]){
	                if(col[z]==0){
	                    col[z]=-col[x];
	                    q.push(z);
	                }
	                else if(col[z]==col[x])
	                    return false;
	            }
	        }
	    }
	    return true;
	}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isBipartite(V, adj);    
		if(ans)cout << "1\n";
		else cout << "0\n";  
	}
	return 0;
}  // } Driver Code Ends