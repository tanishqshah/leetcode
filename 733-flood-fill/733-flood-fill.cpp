class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        if(newColor==image[sr][sc])
            return image;
        change(image,sr,sc,newColor , image[sr][sc]);
        return image;
    }
    
    void change(vector<vector<int>>&image , int r, int c, int color, int oldcolor){
        if(r>=image.size() || r<0 || c<0 || c>=image[0].size() || image[r][c]!=oldcolor)
            return;
        
        image[r][c]=color;
        change(image,r-1,c,color,oldcolor);
        change(image,r,c-1,color,oldcolor);
        change(image,r+1,c,color,oldcolor);
        change(image,r,c+1,color,oldcolor);
        
    }
};