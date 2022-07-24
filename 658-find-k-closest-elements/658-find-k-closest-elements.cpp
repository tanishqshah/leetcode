typedef pair<int, int> pi;
class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pi, vector<pi>, greater<pi> > pq;
        for(int i=0;i<arr.size();i++){
            int j=abs(arr[i]-x);
            pq.push(make_pair(j,arr[i]));
        }
        vector<int>ans;
        while(k>0){
            pair<int,int>top;
            top=pq.top();
            pq.pop();
            ans.push_back(top.second);
            k--;
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};