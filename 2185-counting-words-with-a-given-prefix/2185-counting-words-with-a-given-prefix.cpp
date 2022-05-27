class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int count=0;
        for(int i=0;i<words.size();i++){
            string chk=words[i];
            int t=0;
            for(int j=0;j<pref.size();j++){
                if(chk[j]!=pref[j]){
                    t=1;
                    break;
                }
            }
            if(t==0)
                count++;
        }
        return count;
    }
};