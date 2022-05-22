class Solution {
public:
    bool isPalindrome(vector<vector<int>> &palindromeTable, string &s, int i, int j) {
        if (i == j) return (palindromeTable[i][j] = true);
        if (j - i == 1) return (palindromeTable[i][j] = s[i] == s[j]);
        if (palindromeTable[i][j] != -1) return palindromeTable[i][j];
        if (s[i] == s[j]) return palindromeTable[i][j] = isPalindrome(palindromeTable, s, i + 1, j - 1);
        return palindromeTable[i][j] = false;
    }

    int countSubstrings(string s) {
        int n = s.size();
        vector<vector<int>> palindromeTable(n, vector<int>(n, -1));
        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                ans += isPalindrome(palindromeTable, s, i, j);
            }
        }
        return ans;
    }
};