class Solution {
public:
    int longestMountain(vector<int>& arr) {
        vector<int>left(arr.size(),0);
        vector<int>right(arr.size(),0);
        if(arr.size()<3)
            return 0;
        int ans=0;
        for(int i=1;i<arr.size();i++){
            if(arr[i]>arr[i-1]){
                left[i]=left[i-1]+1;
            }
            else{
                left[i]=0;
            }
        }
        for(int i=arr.size()-2;i>=0;i--){
            if(arr[i]>arr[i+1]){
                right[i]=right[i+1]+1;
            }
            else{
                right[i]=0;
            }
        }
        for(int i=0;i<arr.size();i++){
            if(left[i]>0 && right[i]>0)
                ans=max(ans,left[i]+right[i]+1);
        }
        return ans;
    }
};