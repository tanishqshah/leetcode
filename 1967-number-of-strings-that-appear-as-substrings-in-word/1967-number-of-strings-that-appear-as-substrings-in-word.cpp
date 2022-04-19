class Solution {
public:
    int numOfStrings(vector<string>& str, string b) {
        int ans=0;
        for(int i=0;i<str.size();i++){
            int x=0;
            if(str[i].length()>b.length())
                continue;
            int k=0;
            for(int j=0;j<b.length();j++){
                if(str[i][k]!=b[j]){
                    j=j-k+1;
                    k=0,x=0;
                }
                if(str[i][k]==b[j]){
                    k++,x++;
                }
                if(x==str[i].length())
                {
                    cout<<str[i]<<" ";
                    ans++;
                    break;
                }
            }
        }
        return ans;
    }
};