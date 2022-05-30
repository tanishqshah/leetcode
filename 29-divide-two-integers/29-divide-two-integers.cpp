class Solution {
public:
    int divide(int dividend, int divisor) {
         if(dividend==-2147483648 && divisor==-1)return INT_MAX;
    int k=dividend/divisor;
    if(k<=INT_MIN){
        return INT_MIN;
    }
    if(k>=INT_MAX){
        return INT_MAX;
    }
   return k;
}
};