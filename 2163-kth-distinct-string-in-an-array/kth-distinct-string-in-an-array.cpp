class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int>mp;
        int count=1;
        for(auto i : arr){
            mp[i]++;
        }

        for(auto i : arr){
            if(mp[i]==1){
                if(count==k){
                    return i;
                }
                count++;
            }
        }
        return "";
    }
};