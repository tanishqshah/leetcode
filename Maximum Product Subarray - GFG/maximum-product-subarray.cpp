// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:

	long long maxProduct(vector<int> nums, int n) {
	    long long mult=1,pro=INT_MIN;
        for(long long i=0;i<nums.size();i++){
           mult=mult*nums[i];
           pro=max(pro, mult);
           if(mult==0){
               mult=1;
           }
        }
        mult=1;
        for(long long i=nums.size()-1;i>=0;i--){
           mult=mult*nums[i];
           pro=max(pro, mult);
           if(mult==0){
               mult=1;
           }
           
        }
        return pro;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<int> arr(n);
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends