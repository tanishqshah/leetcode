class Solution {
public:
    string reverseWords(string s) {
        vector<string>s1;
        string x="";
        string add="";
        for(int i=0;i<s.length();i++){
            if(s[i]==' '){
                x=x+add;
                add="";
                x=x+" ";
            }
            else{
                add=s[i]+add;
            }
        }
        x=x+add;
        return x;
    }
};