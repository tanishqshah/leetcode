class Solution {
public:
    int maximumUnits(vector<vector<int>>& box, int t) {
        vector<int>ans(1001,0);
        int res=0;
        for(int i=0;i<box.size();++i)
                ans[box[i][1]]=ans[box[i][1]]+box[i][0];
        
        for(int i=1000;i>=0;i--){
            if(ans[i]==0)
                continue;
            if(ans[i]>t){
                res=res+t*i;
                return res;
            }
            else{
                res=res+ans[i]*i;
                t=t-ans[i];
            }
        }
        return res;
    }
};