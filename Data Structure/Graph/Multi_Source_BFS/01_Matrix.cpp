#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> direction{{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
    using P = pair<int, int>;

    vector<vector<int>> updateMatrix(vector<vector<int>> &mat)
    {
        int m = mat.size();
        int n = mat[0].size();
        queue<P> que;
        vector<vector<int>> distance(m, vector<int>(n, -1));

        // Step 1: Initialize queue with all 0 cells and mark them as distance 0
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (mat[i][j] == 0)
                { // Push 0s instead of 1s
                    distance[i][j] = 0;
                    que.push({i, j});
                }
            }
        }

        // Step 2: BFS to update distances
        while (!que.empty())
        {
            P curr = que.front();
            que.pop(); // Fix: Don't forget to pop

            int i = curr.first;
            int j = curr.second;

            for (auto &dir : direction)
            {
                int i_ = i + dir[0];
                int j_ = j + dir[1];

                if (i_ >= 0 && i_ < m && j_ >= 0 && j_ < n &&
                    distance[i_][j_] == -1)
                { // If not visited
                    distance[i_][j_] = distance[i][j] + 1;
                    que.push({i_, j_});
                }
            }
        }
        return distance;
    }
};