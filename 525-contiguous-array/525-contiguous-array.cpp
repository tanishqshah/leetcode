class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int sum=0;
        unordered_map<int,int>mp;
        int ans=0;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)
                sum=sum-1;
            else
                sum=sum+1;
            if(sum==0){
                if(ans<i+1){
                    ans=i+1;
                }
            }
            else if(mp.find(sum)!=mp.end()){
                if(ans <  i-mp[sum]){
                    ans=i-mp[sum];
                }
            }
            else if(mp.find(sum)==mp.end()){
                mp.insert({sum,i});
            }
        }
        return ans;
    }
};