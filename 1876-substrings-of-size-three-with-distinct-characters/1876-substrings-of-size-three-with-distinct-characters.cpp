class Solution {
public:
    int countGoodSubstrings(string s) {
        unordered_map<int,int>mp;
        int j=0;
        int count=0;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
            if(i>1){
                if(mp.size()==3){
                    count++;
                }
                if(mp[s[j]]==1){
                    mp.erase(s[j]);
                }
                else{
                    mp[s[j]]--;
                }
                j++;
            }
        }
        return count;
    }
};