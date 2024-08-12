class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int count1=0;
        int count2=0;
        int val1=0;
        int val2=0;
        for(int i=0;i<nums.size();i++){
            if(count1==0 && nums[i]!=val2){
                val1=nums[i];
                count1++;
            }
            else if(count2==0 && nums[i]!=val1){
                val2=nums[i];
                count2++;
            }
            else if(nums[i]==val1){
                count1++;
            }
            else if(nums[i]==val2){
                count2++;
            }
            else{
                count1--;
                count2--;
            }
        }
        count1=0;
        count2=0;
        int treshold = nums.size()/3;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==val1)
                count1++;
            else if(nums[i]==val2)
                count2++;
        }
        vector<int>res;
        if(count1>treshold)
            res.push_back(val1);
        if(count2>treshold)
            res.push_back(val2);
        return res;
    }
};