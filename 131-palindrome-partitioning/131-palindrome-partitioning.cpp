class Solution {
public:
    bool ischeck(string& s, int l, int r) {
        while (l < r) {
            if (s[l++] != s[r--]) {
                return false;
            }
        }
        return true;
    }
    
    void solve(vector<vector<string>>&ans,vector<string>&add,string &s , int st){
        int n=s.length();
        if(st==n)
            return ans.push_back(add);
        else{
            for(int i=st;i<n;i++){
                if(ischeck(s,st,i)){
                    add.push_back(s.substr(st,i-st+1));
                    solve(ans,add,s,i+1);
                    add.pop_back();
                }
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>add;
        solve(ans,add,s,0);
        return ans;
    }
};