class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>m1;
        int ans=0;
        // for(int i=0;i<s.length();i++)
        int i=0,j=0;
        while(j<s.length())
        {
            if(m1[s[j]]<1)
            {
                ans=max(ans,j-i+1);
                m1[s[j]]++;
                j++;
            }
            else
            {
                m1[s[i]]--;
                i++;
            }
            
        }
        return ans;
    }
};