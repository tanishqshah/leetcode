class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int t) {
        vector<int>ans(arr.size(),0);
        int res=0;
        ans[0]=arr[0];
        for(int i=1;i<arr.size();i++)
            ans[i]=arr[i]+ans[i-1];
        if(ans[k-1]>=t*k)
            res++;
        for(int i=k;i<arr.size();i++){
            if((ans[i]-ans[i-k])>=t*k)
                res++;
        }
        return res;
        
    }
};

