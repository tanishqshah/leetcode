class Solution {
public:
    int minimumDeletions(string s) {
        int n=s.length();
        vector<int> a(n,0);
        vector<int> b(n,0);
        int c=0;
        for(int i=0;i<n;i++)
        {
            b[i]=c;
            if (s[i]=='b') c++;
        }
        c=0;
        for(int i=n-1;i>=0;i--)
        {
            a[i]=c;
            if (s[i]=='a') c++;
        }
        int ans=n;
        for(int i=0;i<n;i++) 
            ans=min(ans,a[i]+b[i]);
        return ans;
    }
};