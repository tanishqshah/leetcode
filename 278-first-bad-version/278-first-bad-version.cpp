class Solution {
public:
    int firstBadVersion(int n) {
        long long int x=1,y=n,ans;
        while(x<=y)
        {
            int m=(x+y)/2;
            // bool x1=;/
            if(isBadVersion(m))
            {
                ans=m;
                y=m-1;
            }
            else
            {
                x=m+1;
            }
                
        }
        return ans;
        
    }
};