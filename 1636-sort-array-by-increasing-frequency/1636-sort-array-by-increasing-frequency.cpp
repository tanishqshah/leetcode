class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        
        vector<pair<int,int>>arr;
        
        for(auto i : mp){
            arr.push_back(make_pair(i.second,-i.first));
        }
        
        sort(arr.begin(),arr.end());
        
        vector<int>res;
        
        for(int i=0;i<arr.size();i++){
            for(int j=0;j<arr[i].first;j++)
                res.push_back(-arr[i].second);
        }
        return res;
    }
};