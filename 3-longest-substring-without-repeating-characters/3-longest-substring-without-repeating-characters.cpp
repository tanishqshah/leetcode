class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        unordered_map<char,int>mp;
        int j=0;
        int ans=0;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
            if(mp[s[i]]>1){
                while(mp[s[i]]>1){
                    if(s[i]==s[j]){
                        mp[s[j]]--;
                    }
                    else{
                        mp.erase(s[j]);
                    }
                    j++;          
                }
            }
            ans=max(ans,i-j+1);
        }
        return ans;
    }
};