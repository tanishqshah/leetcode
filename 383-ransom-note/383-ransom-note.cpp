class Solution {
public:
    bool canConstruct(string a, string b) {
        unordered_map<char,int>m1;
        unordered_map<char,int>m2;
        
        for(int i=0;i<b.length();i++)
            m2[b[i]]++;
        for(int i=0;i<a.length();i++)
        {
            m1[a[i]]++;
            int x=m1[a[i]];
            int y=m2[a[i]];
            if(x>y)
                return false;
        }
            
        return true;
        
        
    }
};