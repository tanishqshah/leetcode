class Solution {
public:
    int threeSumMulti(vector<int>& nums, int target) {
        vector<long>mp(101,0);
        int mod=pow(10,9)+7;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        sort(nums.begin(),nums.end());
        vector<int>arr;
        arr.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]==nums[i])
                continue;
            arr.push_back(nums[i]);
        }
        
        long ans=0;
        
        for(int i=0;i<arr.size();i++){
            int s1=arr[i];
            int low=i;
            int high=arr.size()-1;
            int get=target-s1;
            while(low<=high){
                int s2=arr[low],s3=arr[high];
                if(s3+s2 < get){
                    low++;
                }
                else if(s3+s2 > get){
                    high--;
                }
                else if(s3+s2==get){
                    cout<<s1<<" "<<s2<<" "<<s3<<endl;
                    if(s1 != s2 && s2 != s3){
                        ans = ans + mp[s1]*mp[s2]*mp[s3];
                    }
                    else if(s1==s2 && s2!=s3){
                        ans = ans + mp[s1]*(mp[s1]-1)/2 * mp[s3];
                    }
                    else if(s1!=s2 && s2==s3){
                        ans = ans + mp[s2]*(mp[s2]-1)/2 * mp[s1];
                    }
                    else{
                        ans = ans + mp[s1]*(mp[s1]-1)*(mp[s1]-2)/6;
                        cout<<ans;
                    }
                    low++,high--;
                    ans=ans%mod;
                }
            }
        }
        return ans;
        
        // return count;
        
    }
};