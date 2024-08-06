class Solution {
public:
    int minimumPushes(string word) {
        unordered_map<char,int>mp;
        for(auto i : word){
            mp[i]++;
        }
        vector<pair<int,char>>res;
        for(auto i : mp){
            res.push_back(make_pair(i.second,i.first));
        }
        sort(res.begin(),res.end());
        reverse(res.begin(),res.end());
        int count=0;
        int press=1;
        int ans=0;
        for(auto i : res){
            press = count/8+1;
            ans = ans + i.first*press;
            count++;
        }
        return ans;


    }
};