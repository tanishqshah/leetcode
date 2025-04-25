class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        heights.push_back(0);
        stack<int>s;
        int maxarea=0;
        for(int i=0;i<heights.size();i++){
            while(!s.empty() && heights[s.top()]>heights[i]){
                int h = heights[s.top()];
                s.pop();
                int w = s.empty() ? i : i-s.top()-1;
                maxarea = max(maxarea,h*w);
            }
            s.push(i);
        }
        return maxarea;
    }
};