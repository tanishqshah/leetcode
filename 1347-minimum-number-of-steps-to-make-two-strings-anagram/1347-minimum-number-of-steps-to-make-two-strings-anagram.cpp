class Solution {
public:
    int minSteps(string s, string t) {
        if(s.length()!=t.length())
            return 0;
        unordered_map<char,int>mp;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
            mp[t[i]]--;
        }
        int ans=0;
        for(auto i : mp){
            if(i.second>0)
                ans=ans+i.second;
        }
        return ans;
    }
};