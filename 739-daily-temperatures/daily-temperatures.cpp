class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        vector<int>answer(temp.size(),0);
        stack<pair<int,int>>st;
        st.push({temp[temp.size()-1],temp.size()-1});
        for(int i=temp.size()-2;i>=0;i--){
            while(!st.empty() && st.top().first<=temp[i]){
                st.pop();
            }
            if(!st.empty()){
                answer[i] = abs (st.top().second - i );
            }
            st.push({temp[i],i});
        }
        return answer;
    }
};