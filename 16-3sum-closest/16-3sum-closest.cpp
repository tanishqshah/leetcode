class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int sum=0;
        long ans=INT_MAX;
        for(int i=0;i<nums.size()-2;i++){
            int sum3=nums[i];
            int left=i+1;
            int right=nums.size()-1;
            int temp=0;
            while(left<right){
                temp=nums[left]+nums[right];
                if(temp<target-nums[i]){
                    left++;
                }
                else if(temp>target-nums[i]){
                    right--;
                }
                else{
                    return sum3+temp;
                }
            }
            if(abs(sum3+temp-target) < abs(ans-target)){
                    ans=sum3+temp;
                    sum=sum3+temp;
            }
        }
        return sum;
    }
};