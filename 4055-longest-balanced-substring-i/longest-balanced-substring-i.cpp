class Solution {
public:
    int longestBalanced(string s) {
        
        int n = s.length();
        int maxLen = 0;

        for(int i=0; i<n; ++i){
            int freqMap[26] = {};
            int maxFreq = 0, distincts = 0;

            for(int j=i; j<n; ++j){
                int idx = s[j] - 'a';
                distincts += (freqMap[idx] == 0);
                maxFreq = max(maxFreq, ++freqMap[idx]);

                if(j-i+1 == distincts * maxFreq)
                    maxLen = max(maxLen, j-i+1);
            }
        }

        return maxLen;
    }
};