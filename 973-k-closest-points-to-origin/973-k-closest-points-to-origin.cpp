class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& nums, int k) {
        priority_queue< pair <int,vector<int>> > p ;
        
        for(int i=0;i<nums.size();i++){
            int x=nums[i][0]*nums[i][0]+nums[i][1]*nums[i][1];
            vector<int>ans;
            ans.push_back(nums[i][0]);
            ans.push_back(nums[i][1]);
            p.push(make_pair(x,ans));
            ans.clear();
        }
        vector<vector<int>>ans;
        int n=nums.size()-k;
        while(n--){
            p.pop();
        }
        while(k--){
            ans.push_back(p.top().second);
            p.pop();
        }
        return ans;
    }
};