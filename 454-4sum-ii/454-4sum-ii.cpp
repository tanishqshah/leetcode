class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        unordered_map<int,int>mp1;        
        unordered_map<int,int>mp2;

        
        for(auto i : nums1){
            for(auto j: nums2){
                mp1[i+j]++;
            }
        }
        int ans=0;
        for(auto i : nums3){
            for(auto j : nums4){
                if(mp1.find(-(i+j))!=mp1.end()){
                    ans=ans+mp1[(-(i+j))];
                }
            }
        }
        return ans;
        
    }
};