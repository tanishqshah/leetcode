class Solution {
public:
    int shortestPath(vector<vector<int>>& a, int k) {
    int n = a.size(), m = a[0].size();
    int d[5] = {0, 1, 0, -1, 0};
    queue <array <int, 3>> q; // just a queue
    vector <int> dp(n * m, INT_MAX);

    // init
    q.push({0, 0, 0});
    dp[0] = 0;

    // Dijkstra
    while (!q.empty()) {
        auto [dist, walls, zz] = q.front(); q.pop();
        if (walls > dp[zz]) 
            continue ; // Dijkstra bad path check

        int xx = zz / m, yy = zz % m;
        if (xx == n - 1 && yy == m - 1)
            return dist;

        for (int i = 0; i < 4; i++) {
            int x = d[i] + xx, y = d[i + 1] + yy;
            if (x < 0 || y < 0 || x >= n || y >= m) 
                continue ; // out of bounds

            int to_break = walls + a[x][y];
            if (to_break > k) 
                continue ; // can't break anymore

            int z = x * m + y;
            if (to_break < dp[z]) { // Dijkstra update dp
                dp[z] = to_break;
                q.push({dist + 1, to_break, z});
            }
        }
    }
    return -1;
}
};