class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        vector<int>row(mat.size(),0);
        vector<int>col(mat[0].size(),0);
        int rowSize=mat.size();
        int colSize=mat[0].size();
        unordered_map<int,pair<int,int>>mp;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[i].size();j++){
                mp[mat[i][j]]={i,j};
            }
        }
        for(int i=0;i<arr.size();i++){
            pair<int,int>rowcol = mp[arr[i]];
            int rowName = rowcol.first;
            int colName = rowcol.second;
            if(++row[rowName]==colSize){
                return i;
            }
            if(++col[colName]==rowSize){
                return i;
            }
        }
        return 0;
    }
};