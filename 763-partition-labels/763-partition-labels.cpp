class Solution {
public:
    vector<int> partitionLabels(string s) {
        
        unordered_map<char,int>mp;
        
        for(int i=0;i<s.length();i++){
            mp[s[i]]=i;
        }
        int max=0;
        int st=0;
        int flag=0;
        vector<int>ans;
        for(int i=0;i<s.length();i++){
            if(max<mp[s[i]]){
                max=mp[s[i]];
            }
            if(max==i && flag==0){
                ans.push_back(max-st+1);
                st=max;
                flag=1;
            }
            else if(max==i && flag==1){
                ans.push_back(max-st);
                st=max;
            }
            
        }
        
        return ans;
        
        
        
    }
};