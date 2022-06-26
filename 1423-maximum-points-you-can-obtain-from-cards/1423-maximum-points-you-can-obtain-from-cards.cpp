class Solution {
public:
    int maxScore(vector<int>& arr, int k) {
        int sum=0;
        for(int i=0;i<arr.size();i++){
            sum=sum+arr[i];
        }
        if(k==arr.size()){
            return sum;
        }
        int get=arr.size()-k;
        int j=0;
        int sum2=0;
        for(int i=0;i<get;i++){
            sum2=sum2+arr[i];
        }
        int mini=sum2;
        for(int i=get;i<arr.size();i++){
            sum2=sum2+arr[i];
            sum2=sum2-arr[j++];
            mini=min(mini,sum2);
        }
        return sum-mini;
    }
};