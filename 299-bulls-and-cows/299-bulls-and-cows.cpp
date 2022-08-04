class Solution {
public:
    string getHint(string s, string t) {
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;
        int x=0;
        int y=0;
        for(int i=0;i<s.length();i++){
            if(s[i]==t[i])
                x++;
            else{
                mp1[s[i]]++;
                mp2[t[i]]++;
            }
        }
        for(auto i : mp1){
            y=y+min(mp2[i.first],i.second);
        }
        string ans=to_string(x)+'A'+to_string(y)+'B';
        return ans;
        
    }
};