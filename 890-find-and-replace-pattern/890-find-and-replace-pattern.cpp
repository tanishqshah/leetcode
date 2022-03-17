class Solution {
public:
    bool check(string &s , string &p){
        unordered_map<char,char>mp;
        for(int i=0;i<s.length();i++){
            if(mp.count(s[i]) && mp[s[i]]!=p[i])
                return false;
            else
                mp[s[i]]=p[i];
        }
        bitset<26> visited;
	    for(auto& pair : mp) 
		    if(visited[pair.second - 'a']) return false;
		    else visited[pair.second - 'a'] = true;
        return true;
    }
    
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string>ans;
        for(auto i : words){
            if(check(i,pattern))
                ans.push_back(i);
        }
        return ans;
    }
};