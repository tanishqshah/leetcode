class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int, int> mp;
        int maxLength = 0;

        for (int num : nums) {
            // If 'num' is already processed, skip it
            if (mp.find(num) != mp.end()) continue;

            int left = (mp.find(num - 1) != mp.end()) ? mp[num - 1] : 0;
            int right = (mp.find(num + 1) != mp.end()) ? mp[num + 1] : 0;

            int sequenceLength = left + 1 + right;

            // Store the updated sequence length at boundary values
            mp[num] = sequenceLength;
            mp[num - left] = sequenceLength;
            mp[num + right] = sequenceLength;

            maxLength = max(maxLength, sequenceLength);
        }
        return maxLength;
    }
};
