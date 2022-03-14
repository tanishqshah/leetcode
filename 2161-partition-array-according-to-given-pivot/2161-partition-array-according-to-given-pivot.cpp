class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>left;
        vector<int>right;
        int chk=0;
        
        for(int i=0;i<nums.size();i++){
            if(pivot>nums[i])
                right.push_back(nums[i]);
            else if(pivot<nums[i])
                left.push_back(nums[i]);
            else
                chk++;
        }
        
        for(int i=0;i<chk;i++){
            right.push_back(pivot);
        }
        
        for(int i=0;i<left.size();i++){
            right.push_back(left[i]);
        }
        // reverse(left.begin(),left.end());
        return right;
        
    }
};