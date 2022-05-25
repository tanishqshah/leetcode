class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        vector<int>ans(2,0);
        ans[0]=-1;
        ans[1]=-1;
        while(low<=high){
            int mid=low+high;
            mid=mid/2;
            if(nums[mid]>target){
                cout<<mid<<endl;
                high=mid-1;
            }
            else if(nums[mid]<target){
                cout<<mid<<endl;
                low=mid+1;
            }
            else{
                cout<<mid<<endl;
                ans[0]=mid;
                high=mid-1;
            }
        }
        low=0,high=nums.size()-1;
        while(low<=high){
            int mid=low+high;
            mid=mid/2;
            if(nums[mid]>target){
                // cout<<mid<<endl;
                high=mid-1;
            }
            else if(nums[mid]<target){
                // cout<<mid<<endl;
                low=mid+1;
            }
            else{
                // cout<<mid<<endl;
                ans[1]=mid;
                low=mid+1;
            }
        }
        return ans;
        
    }
};
// 5 8 8 8 8 10
// 0 1 2 3 4 5
    
// low=7;
// high=10;

// low=8;
// high=10;



