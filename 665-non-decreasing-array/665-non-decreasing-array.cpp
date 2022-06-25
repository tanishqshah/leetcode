class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int prev = INT_MIN;
        int ans = 0;
        int n = nums.size();
        for(int i=1; i<n; ++i){
            if(nums[i-1] > nums[i]){
                if(nums[i] < prev){
                    nums[i] = nums[i-1];
                } else {
                    nums[i-1] = nums[i];
                }
                ++ans;
            }
            prev = nums[i-1];
        }
        return ans<2;
    }
};