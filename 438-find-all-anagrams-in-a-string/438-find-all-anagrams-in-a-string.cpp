class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        unordered_map<char,int>m1;
        unordered_map<char,int>m2;
        
        vector<int>ans;
        if(p.length()>s.length())
            return ans;
        
        for(int i=0;i<p.length();i++){
            m1[p[i]]++;
        }
        int n=p.length();
        for(int i=0;i<n-1;i++){
            m2[s[i]]++;
        }
        int j=0;
        for(int i=n-1;i<s.length();i++){
            cout<<i<<endl;
            m2[s[i]]++;
            int flag=0;
            for(auto k : m1){
               if(m1[k.first] != m2[k.first]){
                   flag=1;
                   break;
               }
            }
            if(flag==0)
                ans.push_back(j);
            m2[s[j]]--;
            j++;
        }
        
        return ans;
    }
};