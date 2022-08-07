class Solution {
public:
    vector<vector<int>>vec;
    void solve(vector<int> &nums,int index)
    {
        if(index==nums.size())
        {
            vec.push_back(nums);
            return;
        }
        for(int i=index;i<nums.size();i++)
        {
            swap(nums[i],nums[index]);
            solve(nums,index+1);
            swap(nums[i],nums[index]);
        }
        return;
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        solve(nums,0);
        sort(vec.begin(), vec.end());
        vec.erase(unique(vec.begin(), vec.end()), vec.end());
        return vec;
    }
};