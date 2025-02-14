class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        vector<int>countEachEdges(edges.size()+2,0);
        for(int i=0;i<edges.size();i++){
            countEachEdges[edges[i][0]]++;
            countEachEdges[edges[i][1]]++;
            if(countEachEdges[edges[i][0]]==edges.size())
                return edges[i][0];
            if(countEachEdges[edges[i][1]]==edges.size())
                return edges[i][1];
            
        }   
        return -1;
    }
};