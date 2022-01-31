class Solution {
public:
    int numTeams(vector<int>& nums) {
        int ans=0;
        int r=0;
        for(int i=0;i<nums.size();++i){
            int x1=0,x2=0,y1=0,y2=0;
            for(int j=0;j<nums.size();++j){
                if(j<i){
                    if(nums[j]<nums[i]){
                        x1++;
                    }
                    else{
                        x2++;
                    }
                }
                else if(i<j){
                    if(nums[i]>nums[j]){
                        y1++;
                    }
                    else{
                        y2++;
                    }
                }
            }
            ans=ans+x1*y2+x2*y1;
        }
        return ans;
    }
};