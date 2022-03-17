class Solution {
public:
    int scoreOfParentheses(string s) {
        string ans="";
        stack<int>st;
        st.push(0);
        for(int i=0;i<s.length();i++){
            if(s[i]=='(')
                st.push(0);
            else{
                int v=st.top();
                st.pop();
                int w=st.top();
                st.pop();
                st.push(w+max(2*v,1));
            }
        }
        return st.top();
    }
};