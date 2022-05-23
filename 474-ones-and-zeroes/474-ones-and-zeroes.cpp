class Solution {
public:
    vector<vector<vector<int>>> records;
    int findMaxForm(vector<string>& strs, int m, int n) {
        vector<pair<int, int>> units;   // .first=zero, .second=one
        for (int i = 0; i < strs.size(); i++){
            int zero = 0, one = 0;
            for (int j = 0; j < strs[i].size(); j++){
                if (strs[i][j] == '0'){
                    zero++;
                }
                else{
                    one++;
                }                
            }
            units.push_back({zero, one});
        }
        this->records = vector<vector<vector<int>>>(strs.size(), vector<vector<int>>(m + 1, vector<int>(n + 1, -1)));
        return helper(units, 0, m, n);
    }
    int helper(vector<pair<int, int>> &units, int index, int m, int n){
        if (index == units.size() - 1){
            if (units[index].first <= m && units[index].second <= n){
                return 1;
            }
            return 0;
        }
        if (this->records[index][m][n] != -1){
            return this->records[index][m][n];
        }
        int sub, largest = INT_MIN;
        sub = helper(units, index + 1, m, n);
        largest = max(largest, sub);
        if (units[index].first <= m && units[index].second <= n){   
            sub = 1 + helper(units, index + 1, m - units[index].first, n - units[index].second);
            largest = max(largest, sub);
        }
        this->records[index][m][n] = largest;
        return largest;
    }
};