class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> freqCount(26, 0);
        int maxFreq = 0;
        int maxLength = 0;
        int j = 0;
        
        for (int i = 0; i < s.length(); i++) {
            maxFreq = max(maxFreq, ++freqCount[s[i] - 'A']);
            
            // If window size - maxFreq exceeds k, shrink window
            if ((i - j + 1) - maxFreq > k) {
                freqCount[s[j] - 'A']--;
                j++;
            }
            
            maxLength = max(maxLength, i - j + 1);
        }
        
        return maxLength;
    }
};
