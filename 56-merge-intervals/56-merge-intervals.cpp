class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        if(nums.size()==0){
            return nums;
        }
        
        ans.push_back(nums[0]);
        int j=0;
        
        for(int i=1;i<nums.size();i++){
            if(ans[j][1]>=nums[i][0]){
                ans[j][1]=max(ans[j][1],nums[i][1]);
            }
            else{
                ans.push_back(nums[i]);
                j++;
            }
        }
        
        return ans;
    }
};