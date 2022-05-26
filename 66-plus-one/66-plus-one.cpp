class Solution {
public:
    vector<int> plusOne(vector<int>& nums) {
        int carry=0;
        for(int i=nums.size()-1;i>=0;i--){
            cout<<i<<endl;
            if(nums[i]==9){
                carry=1;
                nums[i]=0;
            }
            else{
                nums[i]=nums[i]+1;
                carry=0;
                break;
            }
        }
        if(carry==1)
        {
            reverse(nums.begin(),nums.end());
            nums.push_back(1);
            reverse(nums.begin(),nums.end());
        }
        return nums;
    }
};