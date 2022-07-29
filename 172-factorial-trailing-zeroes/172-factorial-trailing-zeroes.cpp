class Solution {
public:
    int trailingZeroes(int n) {
        int ans=0;
        int x=n;
        int div=5;
        while(x!=0){
            ans=ans+n/div;
            div=div*5;
            x=n/div;
        }
        return ans;
    }
};