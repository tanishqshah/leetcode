class Solution {
public:
    int minDominoRotations(vector<int>& nums1, vector<int>& nums2) {
        vector<int> a(7) , b(7) , same(7);
        for(int i=0;i<nums1.size();i++){
            a[nums1[i]]++;
            b[nums2[i]]++;
            if(nums1[i]==nums2[i])
                same[nums1[i]]++;
        }
        int n=nums1.size();
        int ans=INT_MAX;
        for(int i=1;i<=6;i++){
            if(a[i]+b[i]-same[i]==n){
                int swap = min(a[i],b[i])-same[i];
                ans=min(ans,swap);
            }
        }
        return ans==INT_MAX ? -1 : ans;
    }
};