class Solution {
public:
    char findTheDifference(string s, string t) {
        char ans=t[0];
        
        for(int i=1;i<t.length();i++){
            ans=ans^t[i];
        }
        
        for(int i=0;i<s.length();i++){
            ans=ans^s[i];
        }
        return ans;
        
        
        
    }
};