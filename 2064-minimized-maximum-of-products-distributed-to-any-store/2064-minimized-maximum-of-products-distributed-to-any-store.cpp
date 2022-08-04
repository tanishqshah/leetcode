class Solution {
public:
    bool ispossible(vector<int>&nums,int store,int mid){
        int s=0;
        for(int i=0;i<nums.size();i++){
            int q=nums[i];
            while(q>0){
                if(q>=mid){
                    q=q-mid;
                    s++;
                }
                else{
                    s++;
                    q=0;
                }
            }
            if(s>store)
                return false;
        }
        return true;
    }
    int minimizedMaximum(int store, vector<int>& nums) {
        int st=1;
        int r = *max_element(nums.begin(), nums.end());
        int end=r;
        int ans=-1;
        while(st<=end){
            int mid=(end+st)/2;
            if(ispossible(nums,store,mid)){
                ans=mid;
                end=mid-1;
            }
            else
                st=mid+1;
        }
        return ans;
    }
};