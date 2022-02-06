class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        if(nums.size()%2!=0)
            return nums;
        vector<int>ans;
        int i=0,j=n;
        while(i<n){
            ans.push_back(nums[i++]);
            ans.push_back(nums[j++]);

        }
        return ans;
    }
};