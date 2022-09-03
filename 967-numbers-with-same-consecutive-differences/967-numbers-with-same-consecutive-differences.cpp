class Solution {
public:
    void dfs(int len, int last, int cur, int diff, vector<int> &res){
        if(len == 0){
            res.push_back(cur);
            return;
        }
        if(last == -1) {
            for(int d=1;d<=9;d++){
                dfs(len-1, d, cur*10+d, diff, res);
            }
            return;
        }
        for(int d=0;d<=9;d++){
            if(abs(last-d)==diff){
                dfs(len-1, d, cur*10+d, diff, res);
            }
        }
        
        
    }
    vector<int> numsSameConsecDiff(int n, int k) {
        vector<int> res;
        dfs(n, -1, 0, k, res);
        return res;
    }
};