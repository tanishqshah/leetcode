class Solution {
public:
    string countAndSay(int n) {
        string ans="1";
        for(int i=1;i<n;i++){
            string chk="";
            int count=1;
            ans=ans+ans[ans.length()-1];
            for(int j=1;j<ans.length();j++){
                cout<<j<<endl;
                if(j==ans.length()-1){
                    chk=chk+to_string(count)+ans[j-1];
                }
                else if(ans[j]==ans[j-1]){
                    count++;
                }
                else{
                    chk=chk+to_string(count)+ans[j-1];
                    count=1;
                }
            }
            cout<<chk<<endl;
            ans=chk;
        }
        return ans;
    }
};