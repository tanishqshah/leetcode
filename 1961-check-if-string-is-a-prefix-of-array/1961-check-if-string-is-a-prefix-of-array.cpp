class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        string ans="";
        for(int i=0;i<words.size();i++){
            ans=ans+words[i];
            if(ans==s)
                return true;
        }
        return false;
    }
};