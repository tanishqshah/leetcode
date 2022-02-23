class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=INT_MIN;
        int check=0;
        
        for(int i=0;i<nums.size();i++)
        {
            check=check+nums[i];
            if(sum<check)
                sum=check;
            
            if(check<0)
                check=0;
            
            
        }
        
        return sum;
        
    }
};