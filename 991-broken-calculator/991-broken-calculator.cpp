class Solution {
public:
    int brokenCalc(int st, int target) {
        int ans=0;
        while(target!=st){
            if(target<st){
                ans=ans+st-target;
                break;
            }
            if(target%2!=0){
                ans++;
                target=target+1;
            }
            else{
                target=target/2;
                ans++;
            }
        }
        return ans;
    }
};