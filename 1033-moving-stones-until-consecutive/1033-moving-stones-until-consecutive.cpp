class Solution {
public:
    vector<int> numMovesStones(int a, int b, int c) {
        int min=-1,max=-1,mid=-1;
        if(a>b && a>c){
            if(b>c)
                max=a,min=c,mid=b;
            else
                max=a,min=b,mid=c;
        }
        if(b>a && b>c){
            if(a>c)
                max=b,min=c,mid=a;
            else
                max=b,min=a,mid=c;
        }
        if(c>b && c>a){
            if(b>a)
                max=c,min=a,mid=b;
            else
                max=c,min=b,mid=a;
        }
        int diff1=mid-min;
        int diff2=max-mid;
        vector<int>ans;
        if(diff1==1 && diff2==1){
            ans.push_back(0);
        }
        else if(diff2==1 || diff1==2 || diff1==1 || diff2==2){
            ans.push_back(1);
        }
        else{
            ans.push_back(2);
        }
        ans.push_back(diff1-1+diff2-1);
        return ans;
    }
};