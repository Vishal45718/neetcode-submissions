class Solution {
public:
    void dfs(vector<vector<char>>& grid,
             vector<vector<bool>>& visited,
             int i, int j) {

        int m = grid.size();
        int n = grid[0].size();


        if (i < 0 || i >= m || j < 0 || j >= n)
            return;
        
        if (grid[i][j] == '0' || visited[i][j])
            return;

        visited[i][j] = true;

        dfs(grid, visited, i + 1, j);
        dfs(grid, visited, i - 1, j);
        dfs(grid, visited, i, j + 1);
        dfs(grid, visited, i, j - 1);
    }

    int numIslands(vector<vector<char>>& grid) {
        int islands = 0;

        int m = grid.size();
        int n = grid[0].size();

        vector<vector<bool>> visited(
            m, vector<bool>(n, false)
        );

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {

                if (grid[i][j] == '1' && !visited[i][j]) {
                    dfs(grid, visited, i, j);
                    islands++;
                }
            }
        }

        return islands;
    }
};
