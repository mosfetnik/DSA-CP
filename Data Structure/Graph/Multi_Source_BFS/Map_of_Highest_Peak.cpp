#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    using P = pair<int, int>;

    vector<vector<int>> directions{{0, -1}, {0, 1}, {-1, 0}, {1, 0}};

    vector<vector<int>> highestPeak(vector<vector<int>> &isWater)
    {
        int m = isWater.size();
        int n = isWater[0].size();

        vector<vector<int>> height(m, vector<int>(n, -1));

        queue<P> que;

        // Initialize queue with water cells and set height to 0
        for (int i = 0; i < m; i++)
        { // FIXED: iterating over rows (m)
            for (int j = 0; j < n; j++)
            {
                if (isWater[i][j] == 1)
                {
                    height[i][j] = 0;
                    que.push({i, j});
                }
            }
        }

        while (!que.empty())
        {
            P curr = que.front();
            que.pop();

            int i = curr.first;
            int j = curr.second;

            // Iterate in the four possible directions
            for (auto &dir : directions)
            {
                int new_i = i + dir[0];
                int new_j = j + dir[1];

                if (new_i >= 0 && new_i < m && new_j >= 0 && new_j < n &&
                    height[new_i][new_j] == -1)
                {
                    height[new_i][new_j] = height[i][j] + 1;
                    que.push({new_i, new_j});
                }
            }
        }
        return height;
    }
};
