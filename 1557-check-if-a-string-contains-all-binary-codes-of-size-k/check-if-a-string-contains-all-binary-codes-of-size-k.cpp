class Solution {
public:
    bool hasAllCodes(string s, int k) {
        unordered_map<string,int>mp;
        string tmp="";
        for(int i=0;i<s.length();i++){
            tmp += s[i];
            if(tmp.size()==k){
                mp[tmp]++;
                tmp = tmp.substr(1);
            }

        }
        cout<<mp.size();
        if(mp.size() == pow(2,k)){
            return true;
        }
        return false;
    }
};