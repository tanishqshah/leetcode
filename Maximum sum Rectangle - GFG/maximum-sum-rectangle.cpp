// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int solve(vector<int>&ans){
        int m1=INT_MIN;
        int m2=0;
        for(int i=0;i<ans.size();i++){
            m2=m2+ans[i];
            if(m2>m1)
                m1=m2;
            if(m2<0)
                m2=0;
        }
        return m1;
        
    }
    int maximumSumRectangle(int r, int c, vector<vector<int>> arr) {
        int res=INT_MIN;
        for(int i=0;i<r;i++){
            vector<int>ans(c,0);
            for(int j=i;j<r;j++){
                for(int k=0;k<c;k++){
                    ans[k]=ans[k]+arr[j][k];
                }
                res=max(res,solve(ans));
            }
        }
        return res;
    }
};


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M;
        cin >> N >> M;
        vector<vector<int>> v(N, vector<int>(M));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++) cin >> v[i][j];
        Solution ob;
        cout << ob.maximumSumRectangle(N, M, v) << "\n";
    }
}  // } Driver Code Ends