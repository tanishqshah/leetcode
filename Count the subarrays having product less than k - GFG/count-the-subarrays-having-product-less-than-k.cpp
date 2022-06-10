// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends


class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& arr, int n, long long k) {
        unsigned long long prod=1;
        int i=0;
        int j=0;
        int ans=0;
        while(i<n && j<n){
            prod=prod*arr[j];
            while(prod>=k && i<j){
                prod=prod/arr[i];
                i++;
            }
            if(prod<k)
                ans=ans+j-i+1;
            j++;
        }
        return ans;
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        long long int k;
        cin >> n >> k;
        vector<int> arr(n);
        for (i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.countSubArrayProductLessThanK(arr, n, k) << endl;
    }
    return 0;
}
  // } Driver Code Ends