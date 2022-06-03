class Solution {
public:
    vector<int> powerfulIntegers(int x, int y, int bound) {
        vector<int>x1;
        vector<int>x2;
        x1.push_back(1);
        x2.push_back(1);
        int powx=x;
        int powy=y;
        if(x!=1){
            while(powx<bound){
                x1.push_back(powx);
                powx=powx*x;
            }
        }
        
        if(y!=1){
            while(powy<bound){
                x2.push_back(powy);
                powy=powy*y;
            }
        }
        vector<int>ans;
        unordered_map<int,int>mp;
        for(int i=0;i<x1.size();i++){
            for(int j=0;j<x2.size();j++){
                if(x1[i]+x2[j] <= bound && mp[x1[i]+x2[j]]==0){
                    ans.push_back(x1[i]+x2[j]);
                    mp[x1[i]+x2[j]]++;
                }
            }
        }
        return ans;
    }
};