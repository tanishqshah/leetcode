class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>m1;
        for(int i=0;i<s.length();i++)
            m1[s[i]]++;
        for(int i=0;i<s.length();i++)
            if(m1[s[i]]==1)
                return i;
        return -1;
        
    }
};