class Solution {
public:
    bool backspaceCompare(string s, string t) {
        vector<char>a1;
        vector<char>a2;
        for(int i=0;i<s.length();i++){
            if(s[i]!='#')
                a1.push_back(s[i]);
            else if(a1.size()>0)
                a1.pop_back();
        }
        for(int i=0;i<t.length();i++){
            if(t[i]!='#')
                a2.push_back(t[i]);
            else if(a2.size()>0)
                a2.pop_back();
        }
        if(a1==a2)
            return true;
        else
            return false;
    }
};