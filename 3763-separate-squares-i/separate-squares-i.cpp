class Solution {
public:
    double separateSquares(vector<vector<int>>& squares) {
        double totalArea = 0;
        double low = 2e9, high = 0; 
        
        for(auto& sq : squares) {
            double y = sq[1];
            double l = sq[2];
            
            totalArea += l * l; 
            
            low = min(low, y);
            high = max(high, y + l);
        }

        double halfArea = totalArea / 2.0;
        
        for(int i = 0; i < 100; i++) {
            double mid = low + (high - low) / 2.0;
            
            if(calculateArea(squares, mid) >= halfArea) {
                high = mid; 
            } else {
                low = mid;  
            }
        }
        
        return high; 
    }

    double calculateArea(vector<vector<int>>& squares, double currentY) {
        double area = 0;
        for(auto& sq : squares) {
            double y = sq[1];
            double l = sq[2];
            double top = y + l; 
            
            if(y >= currentY) {
                continue;
            } 
            else if(top <= currentY) {
                area += l * l; 
            } 
            else {
                area += l * (currentY - y);
            }
        }
        return area;
    }
};