class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char,int>mp;
        int ans=0;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
            if(mp[s[i]]==2){
                ans=i;
                break;
            }
        }
        return s[ans];
    }
};