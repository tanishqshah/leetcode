class Solution {
public:
    int repeatedStringMatch(string s1, string s2) {
        string ans="";
        int count=0;
        while(ans.size()<s2.size()){
            ans=ans+s1;
            count++;
        }
        if(ans.find(s2) != string::npos)
            return count;
        ans=ans+s1;
        if(ans.find(s2) != string::npos)
            return count+1;
        else
            return -1;
        
    }
};