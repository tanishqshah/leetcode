class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int>mp;
        
        for(int i=0;i<t.length();i++){
            mp[t[i]]++;
        }
        
        for(int i=0;i<s.length();i++){
            mp[s[i]]--;
        }
        char ans;
        for(auto i : mp){
            if(i.second==1){
                ans=i.first;
            }
        }
        return ans;
        
        
    }
};