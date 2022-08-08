class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int>mp(26,0);
        int maxi=0;
        int size=0;
        int ans=0;
        int j=0;
        mp[s[j]-'A']++;
        for(int i=1;i<s.length();i++){
            mp[s[i]-'A']++;
            maxi=*max_element(mp.begin(),mp.end());
            size=i-j+1;
            while(size - maxi > k){
                mp[s[j]-'A']--;
                j++;
                maxi=*max_element(mp.begin(),mp.end());
                size=i-j+1;
            }
            ans=max(ans,size);
        }
        return ans;
    }
};