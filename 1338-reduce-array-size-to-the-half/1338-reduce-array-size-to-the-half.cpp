class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int>mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        priority_queue<int>pq;
        for(auto i : mp){
            pq.push(i.second);
        }
        int ans=0;
        int count=0;
        int n=arr.size();
        while(ans*2<arr.size()){
            ans=ans+pq.top();
            pq.pop();
            count++;
        }
        return count;
    }
};