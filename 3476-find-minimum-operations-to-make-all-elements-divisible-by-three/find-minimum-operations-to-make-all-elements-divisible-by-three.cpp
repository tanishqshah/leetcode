class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int count =0 ;
        for(auto i : nums){
            if(i%3!=0)
                count++;
        }
        return count;
    }
};