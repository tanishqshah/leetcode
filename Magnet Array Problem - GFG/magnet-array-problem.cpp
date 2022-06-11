// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
        void nullPoints(int n, double magnets[], double getAnswer[])
        {
            for(int i=0; i<n-1; i++){
                getAnswer[i] = mid_point(magnets[i], magnets[i+1], magnets, n);
            }   
        }
        double mid_point(double l, double h, double magnets[], int n){
        while(l<=h){
            double m=(h+l)/2;
            double t_force=0;
            for(int i=0; i<n; i++){
                t_force += 1/(m-magnets[i]);
            }
            if(abs(t_force)<0.000001){
             return m;   
            }
            else if(t_force<0){
                h=m;
            }
            else{
                l=m;
            }
        }
        return l;
        }
        
    
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        double magnets[n], getAnswer[n];
        for(int i=0;i<n;i++)
        cin>>magnets[i];
        Solution ob;
        ob.nullPoints(n, magnets, getAnswer);
        
        for(int i=0; i<n-1; i++)
            printf("%0.2lf ",getAnswer[i]);
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends