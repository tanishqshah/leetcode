class Solution {
public:
    bool isValid(string s) {
        stack<char>ans;
        // ans.push(s[0]);
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            {
                ans.push(s[i]);
            }
            else{
                if(ans.empty())
                    return false;
                else if(ans.top()=='(' && s[i]==')')
                    ans.pop();
                else if(ans.top()=='[' && s[i]==']')
                    ans.pop();
                else if(ans.top()=='{' && s[i]=='}')
                    ans.pop();
                else
                    return false;
            }
        }
        return ans.empty();
    }
};