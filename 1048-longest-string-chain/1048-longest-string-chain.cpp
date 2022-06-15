class Solution {
public:
    static bool compare(const string &s1, const string &s2) {
        return s1.length() < s2.length();
    }
    int longestStrChain(vector<string>& arr) {
        sort(arr.begin(),arr.end(),compare);
        unordered_map<string,int>dp;
        int res=0;
        for(auto i : arr){
            for(int j=0;j<i.length();j++){
                string pre=i.substr(0,j)+i.substr(j+1);
                dp[i]=max(dp[i],dp.find(pre)==dp.end() ? 1 : dp[pre]+1);
            }
            res=max(res,dp[i]);
        }
        return res;
    }
};