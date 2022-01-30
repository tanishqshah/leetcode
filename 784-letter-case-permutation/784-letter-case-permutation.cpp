class Solution {
    
public:
    void solve(int i, string &s, string &ds, vector<string> &ans){
    
    if(i >= s.length()){
        ans.push_back(ds);
        return;
    }
    if(int(s[i]) >= 65 && int(s[i]) <= 90){
        ds.push_back(s[i]);
        solve(i+1, s, ds, ans);
        ds.pop_back();
        
        ds.push_back(s[i]+32);
        solve(i+1, s, ds, ans);
        ds.pop_back();
    }
    else if(int(s[i]) >= 97 && int(s[i]) <= 122){
        ds.push_back(s[i]);
        solve(i+1, s, ds, ans);
        ds.pop_back();
        
        ds.push_back(s[i]-32);
        solve(i+1, s, ds, ans);
        ds.pop_back();
    }
    else{
        ds.push_back(s[i]);
        solve(i+1, s, ds, ans);
        ds.pop_back();
    }
    
}
    vector<string> letterCasePermutation(string s) {
        // vector<vector<string>>ans;
        vector<string>res;
        string ans="";
        solve(0,s,ans,res);
        return res;
        
    }
};