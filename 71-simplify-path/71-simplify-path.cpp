class Solution {
public:
    string simplifyPath(string path) {
        string res="";
        string tmp;
        stack<string>s;
        stringstream ss(path);
        while(getline(ss,tmp,'/')){
            if(tmp=="" || tmp==".")
                continue;
            if(tmp==".." && !s.empty())
                s.pop();
            else if(tmp!="..")
                s.push(tmp);
        }
        while(!s.empty()){
            res="/"+s.top()+res;
            s.pop();
        }
        return res.empty() ? "/" : res;
    }
};