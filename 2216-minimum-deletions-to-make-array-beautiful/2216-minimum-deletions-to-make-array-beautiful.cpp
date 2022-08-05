class Solution {
public:
    int minDeletion(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,1);
        int sum=0;
        for(int i=0;i<nums.size()-1;i++){
            if((i-sum)%2==0 && nums[i]==nums[i+1])
                sum++;
        }
        if((n-sum)%2)
            sum++;
        return sum;
    }
};