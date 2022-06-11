// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    vector<vector<int>> overlappedInterval(vector<vector<int>>& nums) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        int n1=nums[0][0],n2=nums[0][1];
        for(int i=1;i<nums.size();i++){
            if(nums[i][0]>n2 && nums[i][1]>n1)
            {
                ans.push_back(vector<int>{n1,n2});
                n1=nums[i][0];
                n2=nums[i][1];
            }
            else{
                n1=min(n1,nums[i][0]);
                n2=max(n2,nums[i][1]);
            }
        }
        ans.push_back(vector<int>{n1,n2});
        return ans;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>Intervals(n);
		for(int i = 0; i < n; i++){
			int x, y;
			cin >> x >> y;
			Intervals[i].push_back(x);
			Intervals[i].push_back(y);
		}
		Solution obj;
		vector<vector<int>> ans = obj.overlappedInterval(Intervals);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
		}
		cout << "\n";
	}
	return 0;
}  // } Driver Code Ends