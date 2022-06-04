class Solution {
public:
    void isSafe(vector<vector<string>>&mat,int r,int c,vector<vector<int>>&ans){
        for(int i=r-1;i>=0;i--){
            if(mat[i][c]=="Q"){
                vector<int>res;
                res.push_back(i);                
                res.push_back(c);
                ans.push_back(res);
                break;
            }
        }
        for(int i=r+1;i<8;i++){
            if(mat[i][c]=="Q"){
                vector<int>res;
                res.push_back(i);                
                res.push_back(c);
                ans.push_back(res);
                break;
            }
        }
        for(int i=c-1;i>=0;i--){
            if(mat[r][i]=="Q"){
                vector<int>res;
                res.push_back(r);                
                res.push_back(i);
                ans.push_back(res);
                break;
            }
        }
        for(int i=c+1;i<8;i++){
            if(mat[r][i]=="Q"){
                vector<int>res;
                res.push_back(r);                
                res.push_back(i);
                ans.push_back(res);
                break;
            }
        }
        for(int i=r,j=c;i<8&&j<8;i++,j++){
            if(mat[i][j]=="Q"){
                vector<int>res;
                res.push_back(i);                
                res.push_back(j);
                ans.push_back(res);
                break;
            }
        }
        for(int i=r,j=c;i>=0 && j>=0 ;i--,j--){
            if(mat[i][j]=="Q"){
                vector<int>res;
                res.push_back(i);                
                res.push_back(j);
                ans.push_back(res);
                break;
            }
        }
        for(int i=r,j=c;i>=0 && j<8 ;i--,j++){
            if(mat[i][j]=="Q"){
                vector<int>res;
                res.push_back(i);                
                res.push_back(j);
                ans.push_back(res);
                break;
            }
        }
        for(int i=r,j=c;i<8 && j>=0 ;i++,j--){
            if(mat[i][j]=="Q"){
                vector<int>res;
                res.push_back(i);                
                res.push_back(j);
                ans.push_back(res);
                break;
            }
        }
    }
    vector<vector<int>> queensAttacktheKing(vector<vector<int>>& q, vector<int>& king) {
        vector<vector<int>>ans;
        vector<vector<string>>mat(8,vector<string>(8,"."));
        for(int i=0;i<q.size();i++){
            mat[q[i][0]][q[i][1]]="Q";
        }
        mat[king[0]][king[1]]="K";
        isSafe(mat,king[0],king[1],ans);
        return ans;
    }
};