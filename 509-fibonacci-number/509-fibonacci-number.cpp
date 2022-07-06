class Solution {
public:
    int fib(int n) {
        int ft=1,sec=1;
        if(n==1)
            return ft;
        else if(n==2)
            return sec;
        int ans=0;
        ft=1;
        sec=1;
        for(int i=3;i<=n;i++)
        {
            ans=ft+sec;
            // sec=ans;
            ft=sec;
            sec=ans;
        }
        return ans;
        
    }
};