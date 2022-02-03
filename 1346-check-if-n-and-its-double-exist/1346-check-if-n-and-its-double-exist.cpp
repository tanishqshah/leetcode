class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int,int>mp;
        mp[arr[0]]++;
        for(int i=1;i<arr.size();i++){
            if(arr[i]%2==0){
                if(mp.find(arr[i]/2)!=mp.end() || mp.find(arr[i]*2)!=mp.end())
                    return true;
            }
            else{
                if(mp.find(arr[i]*2)!=mp.end()){
                    return true;
                }
            }
            mp[arr[i]]++;
        }
        return false;
    }
};