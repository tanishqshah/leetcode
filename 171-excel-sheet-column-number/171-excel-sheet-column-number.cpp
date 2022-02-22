class Solution {
public:
    int titleToNumber(string s) {
        int n=s.length();
        int ans=0;
        
        for(int i=0;i<n;i++){
            int x=s[i]-64;
            int p=pow(26,n-1-i);
            x=x*p;
            ans=ans+x;
        }
        return ans;
    }
};