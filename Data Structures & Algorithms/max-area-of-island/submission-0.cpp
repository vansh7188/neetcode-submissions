class Solution {
    int dfs(int i, int j, vector<vector<int>>& grid, vector<vector<int>>& vis) {
        vis[i][j] = 1;
        int n = grid.size();
        int m = grid[0].size();
        
        int dummyrow[] = {-1, 0, 1, 0};
        int dummycol[] = {0, 1, 0, -1};
        int area = 1;

        for (int a = 0; a < 4; a++) {
            int newrow = i + dummyrow[a];
            int newcol = j + dummycol[a];

            if (newrow >= 0 && newrow < n && newcol >= 0 && newcol < m) {
                if (vis[newrow][newcol] == 0 && grid[newrow][newcol] == 1) {
                    area += dfs(newrow, newcol, grid, vis);
                }
            }
        }
        return area;
    }

public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 0));

        int maxi = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1 && vis[i][j] == 0) {
                    int ans = dfs(i, j, grid, vis);
                    maxi = max(maxi, ans);
                }
            }
        }
        return maxi;
    }
};