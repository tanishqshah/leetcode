class Solution {
public:
    int calPoints(vector<string>& s) {
        stack<int>st;
        int ans=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=="C"){
                st.pop();
            }
            else if(s[i]=="D"){
                int x=st.top();
                st.push(x*2);
            }
            else if(s[i]=="+"){
                int x=st.top();
                st.pop();        
                int y=x+st.top();
                st.push(x);
                st.push(y);
            }
            else
            {
                cout<<s[i]<<" ";
                st.push(stoi(s[i]));
            }
        }
        while(!st.empty()){
            cout<<endl;
            cout<<st.top()<<endl;
            ans=ans+st.top();
            st.pop();
        }
        return ans;
    }
};