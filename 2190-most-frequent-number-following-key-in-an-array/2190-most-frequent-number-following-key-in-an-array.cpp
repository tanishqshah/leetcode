class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        int ans;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==key){
                mp[nums[i+1]]++;
                cout<<nums[i+1]<<endl;
            }
        }
        int max=0;
        for(auto i : mp){
            if(i.second>max){
                ans=i.first;
                max=i.second;
            }
        }
        return ans;
    }
};