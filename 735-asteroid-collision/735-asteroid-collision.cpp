class Solution {
public:
    vector<int> asteroidCollision(vector<int>& nums) {

        stack<int>st;
        for(int i : nums){
            // 5 10 -5
            if(i>0){
                st.push(i);
            }
            else{
                // 2 1 -2
                while(st.size()>0 && st.top()>0 && st.top()< -i){
                    st.pop();
                }
                // 2 -2
                if(st.size()>0 && st.top()==-i){
                    st.pop();
                }
                // 3 2 -1
                else if(st.size()>0 && st.top()>-i){
                    // 3 2
                    // no need to push anything
                }
                // 3 2 4
                else{
                    st.push(i);
                }
            }
        }
        vector<int>ans(st.size());
        int i=ans.size()-1;
        while(i>=0){
            ans[i--]=st.top();
            st.pop();
        }
        
        return ans;
    }
};