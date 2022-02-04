class Solution {
public:
    bool isNice(string s){
        unordered_map<int,int> m;
        for(int i=0; i<s.length(); i++){
            m[s[i]]++;
        }
        for(int i=0; i<s.length(); i++){
            int check1 = s[i] + 32;
            int check2 = s[i]-32;
            if(s[i] < 97){
                if(m.find(check1) == m.end()){
                    return false;
                }
            }
            else{
                if(m.find(check2) == m.end()){
                    return false;
                }
            }
        }
        return true;
    }
    string longestNiceSubstring(string s) {
        int n = s.size();
        string ans = "";
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                bool x;
                if(x = isNice(s.substr(i,n-j))){
                    cout<<x<<" "<<s.substr(i,n-j)<<endl;
                    string temp = s.substr(i,n-j);
                    if(temp.length() > ans.length()){
                        ans = temp;
                    }
                }
            }
        }
        return ans;
    }
};