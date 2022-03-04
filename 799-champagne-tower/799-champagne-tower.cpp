class Solution {
public:
       double res[102][102];               ///vector for storing values
   
    double champagneTower(int poured, int query_row, int query_glass) {
    
        res[0][0] = poured;               ///Intialsing the first element
        
        for(int i = 0; i <= query_row; i++) {
            
            for(int j = 0; j <= i; j++) {
                
                if(res[i][j] > 1) {                          ///distributing if the quantity is more than one to ther further rows and columns
                    double rem= res[i][j] - 1;
                    res[i][j]=1;
                    res[i+1][j]=res[i+1][j]+rem/2;
                    res[i+1][j+1]=res[i+1][j+1]+rem/2;
                }
            }
        }
        
        return res[query_row][query_glass];    ///returning thw queried result
    }
};