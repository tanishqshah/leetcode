class Solution {
public:
    int memo[100][100][21];
    const int MAX_COST = 1000001;
    
    int findMinCost(vector<int>& houses, vector<vector<int>>& cost, int targetCount, int currIndex,
                    int neighborhoodCount, int prevHouseColor) {
        if (currIndex == houses.size()) {
            return neighborhoodCount == targetCount ? 0 : MAX_COST;
        }
        
        if (neighborhoodCount > targetCount) {
            return MAX_COST;
        }
        if (memo[currIndex][neighborhoodCount][prevHouseColor] != -1) {
            return memo[currIndex][neighborhoodCount][prevHouseColor];
        }
        
        int minCost = MAX_COST;
        if (houses[currIndex]) {
            int newNeighborhoodCount = neighborhoodCount + (houses[currIndex] != prevHouseColor);
            minCost = 
                findMinCost(houses, cost, targetCount, currIndex + 1, newNeighborhoodCount, houses[currIndex]);
        } else {
            int totalColors = cost[0].size();
            
            for (int color = 1; color <= totalColors; color++) {
                int newNeighborhoodCount = neighborhoodCount + (color != prevHouseColor);
                int currCost = cost[currIndex][color - 1]
                    + findMinCost(houses, cost, targetCount, currIndex + 1, newNeighborhoodCount, color);
                minCost = min(minCost, currCost);
            }
        }
        
        return memo[currIndex][neighborhoodCount][prevHouseColor] = minCost;
    }
    
    int minCost(vector<int>& houses, vector<vector<int>>& cost, int m, int n, int target) {
        memset(memo, -1, sizeof(memo));
        int answer = findMinCost(houses, cost, target, 0, 0, 0);
        return answer == MAX_COST ? -1 : answer;
    }
};