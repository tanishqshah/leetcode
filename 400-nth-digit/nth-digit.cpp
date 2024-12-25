class Solution {
public:
    int findNthDigit(int n) {
        long long len=1,i=1;
        long long digit=9;
        while(n>len*digit){
            n=n-len*digit;
            len++;
            digit=digit*10;
            i=i*10;
        }
        i=i+(n-1)/len;
        string str=to_string(i);
        cout<<str<<" a";
        cout<<str[(n-1)%len];
        return str[(n-1)%len]-'0';

    }
};