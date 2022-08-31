class Solution {
	void findThePathToOcean(vector<vector<int>>& H, vector<vector<bool>>& V, int prev, int x, int y, int r, int c) {
		if(x<0 || x>=r || y<0 || y>=c || V[x][y] || H[x][y] < prev) {
			return;
		}
		
		V[x][y] = true;
		findThePathToOcean(H, V, H[x][y], x-1, y, r, c);
		findThePathToOcean(H, V, H[x][y], x+1, y, r, c);
		findThePathToOcean(H, V, H[x][y], x, y-1, r, c);
		findThePathToOcean(H, V, H[x][y], x, y+1, r, c);
		
	}
public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int row = heights.size();
		int col = heights[0].size();
		vector<vector<bool>> visited_P(row, vector<bool>(col, false));
		vector<vector<bool>> visited_A(row, vector<bool>(col, false));
		vector<vector<int>> ans;
		
		for(int i=0; i<row; i++) {
			findThePathToOcean(heights, visited_P, 0, i, 0, row, col);
		}
		
		for(int j=0; j<col; j++) {
			findThePathToOcean(heights, visited_P, 0, 0, j, row, col);
		}
		
		for(int i=0; i<row; i++) {
			findThePathToOcean(heights, visited_A, 0, i, col-1, row, col);
		}
		
		for(int j=0; j<col; j++) {
			findThePathToOcean(heights, visited_A, 0, row-1, j, row, col);
		}
		
		for(int i=0; i<row; i++) {
			for(int j=0; j<col; j++) {
				if(visited_P[i][j] && visited_A[i][j])
					ans.push_back({i, j});
			}
		}
		
		return ans;
    }
};