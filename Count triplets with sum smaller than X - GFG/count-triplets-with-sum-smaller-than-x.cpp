// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	
	
	public:
	long long countTriplets(long long arr[], int n, long long sum)
	{
	    sort(arr,arr+n);
	    long long ans=0;
	    for(int i=0;i<n-2;i++){
	        long long sum1=sum-arr[i];
	        int s=i+1;
	        int e=n-1;
	        while(s<e){
	            long long sum2=arr[s]+arr[e];
	            if(sum2<sum1){
	                ans=ans+e-s;
	                s++;
	            }
	            else
	                e--;
	        }
	    }
	    return ans;
	}
		 

};

// { Driver Code Starts.

int main() 
{
  
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
    	long long sum;
        cin>>n>>sum;
        long long arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
	    

       

        Solution ob;
        cout << ob.countTriplets(arr, n, sum) ;
	   
        
	    cout << "\n";
	     
    }
    return 0;
}

  // } Driver Code Ends