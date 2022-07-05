class Solution {
public:
    int mostWordsFound(vector<string>& str) {
        int ans=0;
        for(int i=0;i<str.size();i++){
            string s=str[i];
            int count=0;
            for(int j=0;j<s.length();j++){
                if(s[j]==' ')
                    count++;
            }
            cout<<count<<" ";
            ans=max(ans,count);
        }
        return ans+1;
    }
};