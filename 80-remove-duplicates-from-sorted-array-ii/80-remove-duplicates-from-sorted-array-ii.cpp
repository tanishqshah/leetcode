class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int j=0;
        for(int i=0;i<nums.size();i++){
            if(mp[nums[i]]>=2){
                nums[j]=nums[i];
                j++;
                cout<<j<<endl;
                nums[j]=nums[i];
                j++;                
                cout<<j<<endl;

                
                i=i+mp[nums[i]]-1;
                mp[nums[i]]=0;
            }
            else if(mp[nums[i]]==1){
                nums[j]=nums[i];
                j++;
                cout<<j<<endl;
            }
        }
        return j;
    }
};