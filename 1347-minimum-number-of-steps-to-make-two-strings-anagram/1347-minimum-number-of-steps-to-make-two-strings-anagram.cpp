class Solution {
public:
    int minSteps(string s, string t) {
        if(s.length()!=t.length())
            return 0;
        unordered_map<char,int>mp;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        
        for(int i=0;i<t.length();i++){
            if(mp[t[i]]>0)
                mp[t[i]]--;
        }
        int ans=0;
        for(auto i : mp){
            ans=ans+i.second;
        }
        return ans;
    }
};