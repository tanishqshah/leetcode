class Solution {
public:
    bool solve(vector<vector<char>>& board,int i,int j,string word,int ind){
        if(ind == word.size()){
            return true;
        }
        if(i<0 || i >=board.size() || j<0 || j>=board[0].size() || word[ind]!=board[i][j]){
            return false;
        }

       char temp = board[i][j];
       board[i][j]='#';
        bool sol = solve(board,i+1,j,word,ind+1) ||
            solve(board,i-1,j,word,ind+1) ||
            solve(board,i,j-1,word,ind+1) ||
            solve(board,i,j+1,word,ind+1);
        board[i][j]=temp;
        return sol;
    }
    bool exist(vector<vector<char>>& board, string word) {

        vector<vector<int>>vis(board.size(),vector<int>(board[0].size()));
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[i].size();j++)
                if(board[i][j]==word[0] && solve(board,i,j,word,0))
                    return true;
        }
        return false;
        
    }
};