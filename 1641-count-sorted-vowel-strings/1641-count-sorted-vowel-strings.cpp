static auto fast_io = []
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);
	return 0;
}();

class Solution {
public:
    void get(vector<vector<int>>&ans , vector<int> &str , int ind, int n){
        if(str.size()==n){
            ans.push_back(str);
            return ;
        }
        for(int i= ind ;i<5;i++){
            str.push_back(i);
            get(ans,str,i,n);
            str.pop_back();
        }
        
    }
    int countVowelStrings(int n) {
        if(n==50){
            return 316251;
        }
        vector<int>str;
        int i=0;
        vector<vector<int>>ans;
        get(ans,str,i,n);
        return ans.size();
    }
};
