class Solution {
public:
    int minSetSize(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        priority_queue<int>pq;
        
        for(auto i : mp){
            pq.push(i.second);
        }
        int ans=0;
        int res=0;
        while(ans*2<nums.size()){
            ans=ans+pq.top();
            pq.pop();
            res++;
        }
        return res;
        
        
    }
};