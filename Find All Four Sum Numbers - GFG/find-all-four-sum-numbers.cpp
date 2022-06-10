// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &nums, int target) {
        unordered_map<int,int>mp;
        sort(nums.begin(),nums.end());
        vector<vector<int>> res ;
        int n = nums.size();
        for(int i=0; i<n-3; i++){
            if(i>0 && nums[i] == nums[i-1]) continue;
            for(int j=i+1;j<n-2;j++) {
                if(j>i+1 && nums[j] == nums[j-1]) continue;
                int l=j+1;
                int h=n-1;
                long sum=target-(nums[i]+nums[j]);
                while(l < h){
                    if(nums[l]+nums[h] == sum) 
                    {
                        vector<int> ans = {nums[i],nums[j],nums[l],nums[h]};
                        res.push_back(ans);
               
                        while(l<h&&nums[l]==nums[l+1]) l++;
                        while(l<h&&nums[h]==nums[h-1]) h--;
                        l++;
                        h--;
                    }
                    else if(nums[l]+nums[h] < sum){
                        l++;
                    }
                    else 
                        h--;
                    }
          
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
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends