class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        long long maxSum=0;
        long long checkSum=0;
        int leftPointer=0;
        int arraySize=0;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            arraySize++;
            checkSum = checkSum + nums[i];
            while(mp[nums[i]]>1 || arraySize>k){
                mp[nums[leftPointer]]--;
                arraySize--;
                checkSum = checkSum - nums[leftPointer];
                leftPointer++;
            }
            if(arraySize==k){
                maxSum = max(maxSum,checkSum);
            }
        }
        return maxSum;
    }
};