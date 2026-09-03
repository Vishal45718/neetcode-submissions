class Solution {
private:
    int dfs(vector<vector<int>>& grid, vector<vector<bool>>& visited, int i, int j) {
        int m = grid.size();
        int n = grid[0].size();
        

        if (i < 0 || j < 0 || i >= m || j >= n || grid[i][j] == 0 || visited[i][j]) {
            return 0;
        }
        
        visited[i][j] = true;

        return 1 + dfs(grid, visited, i + 1, j) +
                   dfs(grid, visited, i - 1, j) +
                   dfs(grid, visited, i, j + 1) +
                   dfs(grid, visited, i, j - 1);
    }

public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        int maxArea = 0;
        vector<vector<bool>> visited(m, vector<bool>(n, false));

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (!visited[i][j] && grid[i][j] == 1) {
                    int area = dfs(grid, visited, i, j);
                    maxArea = max(maxArea, area);
                }
            }
        }
        return maxArea;
    }
};