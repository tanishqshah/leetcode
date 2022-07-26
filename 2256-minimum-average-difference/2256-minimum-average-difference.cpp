class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        int count=0;
        long sum=0;
        for(auto x:nums)
            sum+=x;
        long lsum=0;
        long rsum=0;
        int ans=0;
        int mini=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            lsum+=nums[i];
            rsum=sum-lsum;
            int ravg;
            if(i==nums.size()-1)
                ravg=0;
            else
                ravg=rsum/(nums.size()-i-1);
            int lavg=lsum/(i+1);
            if(mini > abs(lavg-ravg)){
                mini=abs(lavg-ravg);
                ans=i;
            }
        }
        return ans;
    }
};