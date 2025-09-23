class Solution {
public:
    int compareVersion(string v1, string v2) {
        vector<int>m1;
        vector<int>m2;
        int d1=count(v1.begin(),v1.end(),'.');
        int d2=count(v2.begin(),v2.end(),'.');
        int diff=abs(d1-d2);
        if(d1>d2){
            while(diff--){
                v2=v2+".0"; 
            }
        }
        else{
            while(diff--){
                v1=v1+".0";
            }
        }
        replace(v1.begin(),v1.end(),'.',' ');        
        replace(v2.begin(),v2.end(),'.',' ');
        
        stringstream s1(v1),s2(v2);
        
        int n1,n2;
        
        while(s1>>n1){
            s2>>n2;
            if(n1>n2){
                return 1;
            }
            else if(n1<n2){
                return -1;
            }
        }
        
        return 0;
    }
};