class Solution {
public:
    bool validateStackSequences(vector<int>& p1, vector<int>& p2) {
        int n=p1.size();
        stack<int>st;
        int j=0;
        for(auto i : p1){
            st.push(i);
            while(!st.empty() && j<n && st.top()==p2[j])
            {
                st.pop();
                j++;
            }
        }
        return j==n;
    }
};