class Solution {
public:
    string removeDuplicateLetters(string s) {
        map<char,int>mp;
        for(int i=0;i<s.length();i++){
            mp[s[i]]=i;
        }
        
        stack<char>st;
        map<char,int>vis;
        
        for(int i=0;i<s.size();i++){
            while(vis[s[i]]==0 && !st.empty() && st.top()>s[i] && mp[st.top()]>i){
                vis[st.top()]=0;
                st.pop();
            }
            if(vis[s[i]]==0){
                st.push(s[i]);
                vis[s[i]]=1;
            }
        }
        
        string ans="";
        while(!st.empty()){
            ans=st.top()+ans;
            st.pop();
        }
        return ans;
    }
};