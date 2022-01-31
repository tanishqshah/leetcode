class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        queue<int>q;
        vector<bool>vis(n,false);
        vis[0]=true;
        for(int i : rooms[0])
        {
            q.push(i);
            vis[i]=true;
        }
        while(!q.empty()){
            int temp=q.front();
            q.pop();
            for(int i : rooms[temp]){
                if(vis[i]==false){
                    q.push(i);
                    vis[i]=true;
                }
            }
        }
        for(int i=1;i<n;i++){
            if(vis[i]==false){
                return false;
            }
        }
        return true;
    }
};