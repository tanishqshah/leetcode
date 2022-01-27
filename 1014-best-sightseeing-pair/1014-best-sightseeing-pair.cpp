class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& a) {
        int max1=a[0]+0;
        int ans=INT_MIN;
        int n=a.size();
        for(int i=1;i<n;i++){
            ans=max(ans,max1+a[i]-i);
            max1=max(max1,a[i]+i);
        }
        return ans;
    }
};