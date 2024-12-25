class Solution {
public:
    int getLargestOutlier(vector<int>& nums) {
        if (nums.size() < 2) return INT_MIN; 
        unordered_map<int, int> mp;
        int sum = 0, answer = INT_MIN;
        for (int num : nums) {
            mp[num]++;
            sum += num;
        }
        for (int num : nums) {
            int check = sum - num;
            if (check % 2 == 0) {
                int target = check / 2;
                if (mp[target] > (target == num ? 1 : 0)) {
                    if (answer == INT_MIN || num > answer) {
                        answer = num;
                    }
                }
            }
        }

        return answer;
    }
};