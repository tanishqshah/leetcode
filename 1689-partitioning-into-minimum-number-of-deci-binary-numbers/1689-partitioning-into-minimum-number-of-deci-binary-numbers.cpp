class Solution {
public:
    int minPartitions(string n) {
        int maxs=INT_MIN;
        for(auto x:n)
        {
            int y=x;
            maxs=max(maxs,y);
        }
        return(maxs-48);
    }
};