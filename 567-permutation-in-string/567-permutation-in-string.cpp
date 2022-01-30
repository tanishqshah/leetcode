class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size() > s2.size()) return false;
        unordered_map<char,int>m1;
        unordered_map<char,int>m2; 
        for(int i=0;i<s1.length();i++)
            m1[s1[i]]++;
        for(int i=0;i<s2.length()-s1.length()+1;i++)
        {
            int count=0;
            string str="";
            for(int j=i;j<i+s1.length();j++)
                m2[s2[j]]++;
            for(int k=0;k<s1.length();k++){
                if(m1[s1[k]]==m2[s1[k]])
                    count++;
                else
                    break;
            }
            if(count==s1.length())
                return true;
            m2.clear();
                    
        }
        return false;
    }
};