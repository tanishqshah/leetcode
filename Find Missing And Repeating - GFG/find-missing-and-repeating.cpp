// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
         int repeat,miss;
      for(int i=0;i<n;i++)
      {
          if(arr[abs(arr[i])-1]<0){
              repeat=abs(arr[i]);
          }
          else arr[abs(arr[i])-1] = -arr[abs(arr[i])-1];
      }
      for(int i=0;i<n;i++)
      {
          if(arr[i]>0){
              miss=i+1;
              break;
          }
      }
      int *ans=new int[2];
      ans[0]=repeat;
      ans[1]=miss;
      
      return ans;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}  // } Driver Code Ends