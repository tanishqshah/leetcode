// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
    public:
        int trailingZero(int n){
            int ans=0;
            while(n/5>0){
                ans=ans+n/5;
                n=n/5;
            }
            return ans;
        }
        int findNum(int n)
        {
            int low=1,high=5*n;
            int mid;
            while(low<=high)
            {
            mid=(low+high)/2;
            if(trailingZero(mid)==n&&mid%5==0)
            {
                return mid;
            }
            else if(trailingZero(mid)<n)
            {
                low=mid+1;
            }
            else
            {
               high=mid-1;
            }
       }
        }
};

// { Driver Code Starts.


int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        Solution ob;
        cout <<ob.findNum(n) << endl;
    }
return 0;
}  // } Driver Code Ends