class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        vector<int> res;
        for(int i=0;i<nums.size();i++)
        {
            int x=target-nums[i];
            if(m.find(x)==m.end())
            {
                m[nums[i]]=i;
            }
            else
            {
                res.push_back(m[x]);
                res.push_back(i);
                break;
            }
        }
        return res;
    }
};