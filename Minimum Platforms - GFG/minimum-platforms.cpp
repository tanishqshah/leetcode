// { Driver Code Starts
// Program to find minimum number of platforms
// required on a railway station
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int a[], int d[], int n)
    {
    	vector<pair<int,int>>v1;
        int i,ans=1;
        for(i=0;i<n;i++)
        {
            v1.push_back({a[i],d[i]});
        }
        sort(v1.begin(),v1.end());
        priority_queue<int,vector<int>,greater<>>pq;
        pq.push(v1[0].second);
        for(i=1;i<n;i++)
        {
            if(pq.top()<v1[i].first)
            {
                pq.pop();
                pq.push(v1[i].second);
            }
            else
            {
                ans++;
                pq.push(v1[i].second);
            }
        }
        return ans;
    }
};


// { Driver Code Starts.
// Driver code
int main()
{
    int t;
    cin>>t;
    while(t--) 
    {
        int n;
        cin>>n;
        int arr[n];
        int dep[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int j=0;j<n;j++){
            cin>>dep[j];
        }
        Solution ob;
        cout <<ob.findPlatform(arr, dep, n)<<endl;
    } 
   return 0;
}  // } Driver Code Ends