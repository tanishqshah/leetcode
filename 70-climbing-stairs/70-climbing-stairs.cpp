class Solution {
public:
    int climbStairs(int n) {
        long long int ans=0,first=1,second=2;
        if(n==1)
            return first;
        else if(n==2)
            return second;
        else
        {
            for(int i=3;i<=n;i++)
            {
                ans=first+second;
                first=second;
                second=ans;
            }
        }
        return ans;
    }
};