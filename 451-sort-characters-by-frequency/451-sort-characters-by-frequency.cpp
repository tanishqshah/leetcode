class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        
        priority_queue< pair<int,char> >p;
        
        for(auto i:mp){
            p.push(make_pair(i.second,i.first));
        }
        
        string ans="";
        
        while(!p.empty()){
            ans=ans+string(p.top().first,p.top().second);
            p.pop();
        }
        return ans;
    }
};