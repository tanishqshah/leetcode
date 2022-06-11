// { Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

int maxProfit(vector<int>&arr){
    int fb=INT_MIN;
    int fs=0;
    int sb=INT_MIN;
    int ss=0;
    for(int i=0;i<arr.size();i++){
        fb=max(fb,-arr[i]);
        fs=max(fs,fb+arr[i]);
        sb=max(sb,fs-arr[i]);
        ss=max(ss,sb+arr[i]);
    }
    return ss;
}

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        vector<int> price(n);
        for(int i=0;i<n;i++) cin>>price[i];
        cout<<maxProfit(price)<<endl;
    }

}
  // } Driver Code Ends