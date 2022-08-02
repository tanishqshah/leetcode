class Solution {
public:
    int longestSubstring(string s, int k) {
        int n=s.length();
        if(n==0 || n<k)
            return 0;
        if(k<1)
            return n;
        unordered_map<char,int>count;
        for(char c : s){
            count[c]++;
        }
        
        int l=0;
        while(l<n && count[s[l]]>=k)
            l++;
        if(l>=n-1)
            return l;
        
        int ls1=longestSubstring(s.substr(0,l),k);
        while(l<n && count[s[l]]<k)
            l++;
        int ls2=(l<n) ? longestSubstring(s.substr(l),k) : 0;
        
        return max(ls1,ls2);
        
    }
};