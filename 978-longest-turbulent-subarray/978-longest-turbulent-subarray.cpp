class Solution {
public:
    int maxTurbulenceSize(vector<int>& arr) {
        if(arr.size()==1)
            return 1;
        int ans=1;
        bool flag=arr[0]<arr[1];
        int count=(arr[0]!=arr[1]) ? 2 : 1;
        ans=count;
        for(int i=1;i<arr.size()-1;i++){
            if(flag && arr[i]>arr[i+1] || !flag && arr[i]<arr[i+1]){
                count++;
                ans=max(ans,count);
            }
            else{
                count = (arr[i]!=arr[i+1]) ? 2 : 1;
            }
            flag=arr[i]<arr[i+1];
        }
        return ans;
    }
};