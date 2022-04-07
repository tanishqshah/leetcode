class Solution {
public:
    string defangIPaddr(string s1) {
        string ans="";
        for(int i=0;i<s1.length();i++){
            if(s1[i]=='.'){
                ans=ans+"[.]";
                continue;
            }
            ans=ans+s1[i];
        }
        return ans;
    }
};