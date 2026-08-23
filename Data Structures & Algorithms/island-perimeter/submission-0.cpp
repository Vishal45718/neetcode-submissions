class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int perimeter = 0;

        int m = grid.size();
        int n = grid[0].size();

        int dr[] = {-1, 1, 0 ,0};
        int dc[] = {0, 0, -1, 1};

        for(int r =0; r <m; r++)
        {
            for(int c=0; c <n; c++)
            {
                if(grid[r][c] == 1)
                {
                    for(int k=0; k<4; k++)
                    {
                        int nr = r + dr[k];
                        int nc = c + dc[k];

                        if(nr < 0 || nr >= m || nc < 0 || nc >=n || grid[nr][nc] == 0)
                        {
                            perimeter++;
                        }
                    }
                }
            }
        }

        return perimeter;
    }
};