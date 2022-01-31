class Solution {
public:
    int numSplits(string s) {
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;

        vector<int>s1(s.length(),0);
        vector<int>s2(s.length(),0);
        for(int i=0;i<s.length();i++){
            mp1[s[i]]++;
            s1[i]=mp1.size();
            mp2[s[s.length()-1-i]]++;
            s2[s.length()-i-1]=mp2.size();
        }
        
        int ans=0;
        for(int i=1;i<s.length();i++){
            if(s1[i-1]==s2[i])
                ans++;
        }
        return ans;
    }
};