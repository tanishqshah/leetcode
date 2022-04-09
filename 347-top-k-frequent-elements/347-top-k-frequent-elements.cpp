class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        priority_queue<pair<int, int> > pq;
        
        unordered_map<int,int>mp;
        
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        
        for(auto i : mp){
            pq.push(make_pair(i.second,i.first));
        }
        
        vector<int>ans;
        
        while(k--){
            pair<int,int>top=pq.top();
            ans.push_back(top.second);
            pq.pop();
        }
        
        return ans;
        
    }
};