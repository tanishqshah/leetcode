class Solution {
public:
    string reverseWords(string s) {
        stack<string>st;
        string str = "";
        for(int i = 0;i<s.length();i++){
            if(s[i] != ' ' ){
                str += s[i];
                continue;
            }
            else{
                if(str!="")
                   st.push(str);
                str="";
            }
        }
        if(str!=""){
            st.push(str);
        }
        string ans ="";
        while(!st.empty()){
            ans += st.top() + " ";
            st.pop();
        }
        ans.pop_back();
        return ans;
    }
};