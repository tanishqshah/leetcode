class Solution {
public:
    int maximumBags(vector<int>& cap, vector<int>& rocks, int target) {
        vector<int>vec;
        int ans=0;
        for(int i=0;i<cap.size();i++){
            if(cap[i]-rocks[i]==0){
                ans++;
            }
            else{
                vec.push_back(cap[i]-rocks[i]);
            }
        }
        sort(vec.begin(),vec.end());
        for(int i=0;i<vec.size();i++){
            if(vec[i]<=target){
                target=target-vec[i];
                ans++;
            }
            else{
                break;
            }
        }
        return ans;
    }
};