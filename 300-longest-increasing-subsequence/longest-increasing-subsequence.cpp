#include<bits/stdc++.h>
class Solution {
public:
    // int lowerbound()
    int lengthOfLIS(vector<int>& nums) {
        vector<int>tempArray;
        tempArray.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            if(nums[i]>tempArray.back())
                tempArray.push_back(nums[i]);
            else{
                auto index = lower_bound(tempArray.begin(),tempArray.end(),nums[i]);
                *index= nums[i];
            }
        }
        return tempArray.size();
    }
};