class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> st;
        st.push(-1);  // Base index before starting
        int maxLength = 0;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                st.push(i);  // Store index of '('
            } else {
                st.pop();  // Try to match a ')'
                
                if (st.empty()) {
                    st.push(i);  // Store new base index if stack is empty
                } else {
                    maxLength = max(maxLength, i - st.top());
                }
            }
        }

        return maxLength;
    }
};
