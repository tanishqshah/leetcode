class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int r, int c, int n) {
        if(n==image[r][c]){
            return image;
        }
        change(image,r,c,n,image[r][c]);
        return image;
    }
    void change(vector<vector<int>>&image,int r,int c,int n,int old){
        if(r>=image.size() || r<0 || c<0 || c>=image[0].size() || image[r][c]!=old){
            return;
        }
        image[r][c]=n;
        // change(image,r-1,c,n,old);
        change(image,r-1,c,n,old);
        change(image,r+1,c,n,old);
        change(image,r,c-1,n,old);
        change(image,r,c+1,n,old);
        
    }
};

// vector<vector<int>> floodFill(vector<vector<int>>& image, int r, int c, int n) {
//         if(n==image[r][c]){
//             return image;
//         }
//         change(image,r,c,n,image[r][c]);
//         return image;
//     }
//     void change(vector<vector<int>>&image , int r, int c, int n, int old){
//         if(r>=image.size() || r<0 || c<0 || c>=image[0].size() || image[r][c]!=old){
//             return;
//         }
//         image[r][c]=n;
//         change(image,r-1,c,n,old);        
//         change(image,r+1,c,n,old);
//         change(image,r,c+1,n,old);
//         change(image,r,c-1,n,old);

//     }