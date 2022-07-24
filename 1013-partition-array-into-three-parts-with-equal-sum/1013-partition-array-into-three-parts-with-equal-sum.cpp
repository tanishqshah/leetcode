class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int sum=0;
        unordered_map<int,int>mp;
        for(int i=0;i<arr.size();i++){
            sum=sum+arr[i];
            
        }
        int count=0;
        if(sum%3!=0)
            return false;
        int sum1=0;
        for(int i=0;i<arr.size();i++){
            sum1=sum1+arr[i];
            if(sum1==sum/3){
                count++;
                sum1=0;
            }
            
        }
        if(count>=3)
            return true;
        return false;
    }
};