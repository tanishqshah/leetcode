class Solution {
public:
    int maxProfit(vector<int>& a) {
        int n=a.size();
        int min=INT_MAX;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]<min)
                min=a[i];
            if(ans<(a[i]-min))
                ans=a[i]-min;
            
        }
        return ans;
        
    }
};