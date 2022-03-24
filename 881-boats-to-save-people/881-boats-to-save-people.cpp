class Solution {
public:
    int numRescueBoats(vector<int>& nums, int limit) {
        int ans=0;
        sort(nums.begin(),nums.end());
        int i=0;
        int j=nums.size()-1;
        while(i<=j){
            if(nums[j]==limit){
                ans++;
                j--;
            }
            else if(nums[i]+nums[j]<=limit){
                i++;
                j--;
                ans++;
            }
            else if(nums[i]+nums[j]>limit){
                j--;
                ans++;
            } 
        }
        return ans;
    }
};

// 1 2 2 3 3