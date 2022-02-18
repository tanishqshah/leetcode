class Solution {
public:
    string removeKdigits(string str, int k) {
        int ans=0;
        stack<char>s;
        if(str.length()<=k)
            return "0";
        if(k==0)
            return str;
        s.push(str[0]);
        for(int i=1;i<str.length();i++){
            while(k>0 && !s.empty() && str[i]<s.top())
            {
                k--;
                s.pop();
            }
            s.push(str[i]);
            if(s.size()==1 && str[i]=='0')
                s.pop();
        }
        while(k && !s.empty())
        {
            k--;
            s.pop();
        }
        string res="";
        
        while(!s.empty()){
            res.push_back(s.top());
            s.pop();
        }
        reverse(res.begin(),res.end());
        if(res.size()==0)
            return "0";
        else
            return res;
        
        
    }
};