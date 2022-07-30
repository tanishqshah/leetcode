class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        unordered_map<char,int>mp;
        for(int i=0;i<words2[0].size();i++){
            mp[words2[0][i]]++;
        }
        for(int i=1;i<words2.size();i++){
            string s=words2[i];
            unordered_map<char,int>mp1;
            for(int i=0;i<s.length();i++){
                mp1[s[i]]++;
                mp[s[i]]=max(mp[s[i]],mp1[s[i]]);
            }
        }
        for(auto i : mp){
            cout<<i.first<<" "<<i.second<<endl;
        }
        vector<string>ans;
        for(int i=0;i<words1.size();i++){
            int count=0;
            unordered_map<char,int>mp1;
            for(int j=0;j<words1[i].length();j++){
                mp1[words1[i][j]]++;
            }
            for(auto i : mp){
                if(i.second>mp1[i.first]){
                    count=1;
                    break;
                }
            }
            
            if(count==0)
                ans.push_back(words1[i]); 
        }
        return ans;
    }
};