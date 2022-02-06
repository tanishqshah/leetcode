class Solution {
public:
    int twoEggDrop(int n) {
        int ans=0;
        int i=1;
        while(n>0){
            n=n-i;
            ans++;
            i++;
        }
        return ans;
    }
};