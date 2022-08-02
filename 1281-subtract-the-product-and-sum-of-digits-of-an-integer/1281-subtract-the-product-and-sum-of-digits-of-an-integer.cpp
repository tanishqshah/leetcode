class Solution {
public:
    int subtractProductAndSum(int n) {
        int prod=1;
        int sum=0;
        while(n>0){
            int x=n%10;
            prod=prod*x;
            sum=sum+x;
            n=n/10;
        }
        return prod-sum;
    }
};