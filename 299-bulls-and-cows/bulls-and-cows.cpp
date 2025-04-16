class Solution {
public:
    string getHint(string secret, string guess) {
        int x = 0;
        int y = 0;
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;
        for(int i=0;i<secret.size();i++){
            if(secret[i]==guess[i]){
                x++;
            }
            mp1[secret[i]]++;
            mp2[guess[i]]++;
        }
        for(auto i : mp1){
            y=y+min(i.second,mp2[i.first]);
        }
        string answer=to_string(x)+"A"+to_string(y-x)+"B";
        return answer;
    }
};