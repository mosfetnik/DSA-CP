#include <bits/stdc++.h>
using namespace std;

class Soluation
{

public:
    void shortest_distance(vector<vector<int>> &grid)
    {
        
        int n = grid.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (grid[i][j] == -1)
                    grid[i][j] = 1e5;
            }
        }

        for (int via = 0; via < n; via++)
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    grid[i][j] = min(grid[i][j], (grid[i][via]) + (grid[via][j]));
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (grid[i][j] == 1e5)
                    grid[i][j] = -1;
            }
        }
    }
};