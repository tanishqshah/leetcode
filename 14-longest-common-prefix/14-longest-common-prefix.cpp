class Solution {
public:
    string longestCommonPrefix(vector<string>& num) {
        string ans="";
        int len=INT_MAX;
        for(int i=0;i<num.size();i++){
            if(len>num[i].length())
                len=num[i].length();
        }
        for(int i=0;i<len;i++){
            int chk=0;
            char s=num[0][i];
            for(int j=1;j<num.size();j++){
                cout<<num[j][i]<<" ";
                if(num[j][i]!=s){
                    chk=1;
                    break;
                }
            }
            cout<<endl;
            if(chk==0)
                ans=ans+num[0][i];
            else
                break;
        }
        return ans;
    }
};