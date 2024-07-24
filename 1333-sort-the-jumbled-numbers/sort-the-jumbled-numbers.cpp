class Solution {
public:
    int makeNum(int n, vector<int> & mapping) {
        if (n == 0) return 0;
        return (mapping[n % 10]) + makeNum(n / 10, mapping) * 10;
    }
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        vector<int> ans;
        vector<pair<int, int>> vec;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                vec.push_back({mapping[nums[i]], i});
            } else {
                vec.push_back({makeNum(nums[i], mapping), i});
            }
        }

        sort(vec.begin(), vec.end());

        for (const auto & [num, i] : vec) {
            ans.push_back(nums[i]);
        }
        return ans;
    }
};