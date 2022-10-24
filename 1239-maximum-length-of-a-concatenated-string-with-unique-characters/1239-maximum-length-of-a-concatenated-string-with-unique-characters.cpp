class Solution {
public:
    int help(vector<string>&arr,long long int bit,int i,int n)
    {
        if(i>=n)
            return 0;
        int opt1=0;
        int opt2=0;
        long long int tbit=bit;
        bool is=true;
        int m=arr[i].length();
        for(int j=0;j<m;j++)
        {
            int pos=arr[i][j]-'a';
            long long int bpos=1<<pos;
            if(((tbit)&(bpos))==0)
            {
                tbit=tbit^bpos;
            }
            else
            {
                is=false;
                break;
            }
        }
        
        if(is)
        {
            opt1=m+help(arr,tbit,i+1,n);
        }
        opt2=help(arr,bit,i+1,n);
        return max(opt1,opt2);
        
    }
    int maxLength(vector<string>& arr) {
        int n=arr.size();
        long long int bit=1<<26;
        int ans=0;
        ans=help(arr,bit,0,n);
        return ans;
    }
};