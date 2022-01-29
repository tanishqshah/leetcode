class Solution {
public:
    int largestRectangleArea(vector<int>& arr) {
        vector<int>rb(arr.size());
        stack<int>st;
        st.push(arr.size()-1);
        rb[arr.size()-1]=arr.size();
        int n=arr.size();
        for(int i=n-2;i>=0 ; i--){
            while(st.size()>0 && arr[i]<=arr[st.top()])
                st.pop();
            if(st.size()==0)
                rb[i]=n;
            else
                rb[i]=st.top();
            st.push(i);
        }
        vector<int>lb(arr.size(),0);
        stack<int>st1;
        st1.push(0);
        lb[0]=-1;
        for(int i=1;i<arr.size();i++){
            while(st1.size()>0 && arr[i]<arr[st1.top()]){
                st1.pop();
            }
            if(st1.size()==0)
                lb[i]=-1;
            else
                lb[i]=st1.top();
            st1.push(i);
        }
        
        int ans=0;
        
        for(int i=0;i<arr.size();i++){
            int wid=rb[i]-lb[i]-1;
            int area=wid*arr[i];
            if(area>    ans)
                ans=area;
        }
        
        return ans;
    }
};