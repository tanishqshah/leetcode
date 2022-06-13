// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int arr[], int n, int x)
    {
        sort(arr,arr+n);
        for(int i=0;i<n;i++){
        int sum=arr[i];
        int st=i+1;
        int end=n-1;
        while(st<end){
            if(sum+arr[st]+arr[end]==x)
                return 1;
            else if(sum+arr[st]+arr[end]>x)
                end--;
            else
                st++;
        }
    }
    return 0;
    }

};

// { Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,X;
		cin>>n>>X;
		int i,A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		Solution ob;
        cout <<  ob.find3Numbers(A, n, X) << endl;
    }
}
  // } Driver Code Ends