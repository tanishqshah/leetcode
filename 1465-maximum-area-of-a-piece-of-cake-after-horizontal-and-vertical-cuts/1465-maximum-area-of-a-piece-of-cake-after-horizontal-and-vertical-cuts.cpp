class Solution {
public:
    int maxArea(int h, int w, vector<int>& hc, vector<int>& vc) {
        sort(hc.begin(),hc.end());
        sort(vc.begin(),vc.end());
        int x=0;
        x=max(x,hc[0]-0);
        for(int i=1;i<hc.size();i++){
            x=max(x,hc[i]-hc[i-1]);
        }
        x=max(x,h-hc[hc.size()-1]);
        int y=0;
        y=max(y,vc[0]);
        for(int i=1;i<vc.size();i++){
            y=max(y,vc[i]-vc[i-1]);
        }
        y=max(y,w-vc[vc.size()-1]);
        long long mod=pow(10,9)+7;
        return (1LL*x*y)%mod;
    }
};