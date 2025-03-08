// * using BFS
// & beacuse in the question, cost is the same to reach all the nodes
// ^ if the cost is same to reach all the nodes then we can solve te question the BFS

#include <bits/stdc++.h>
using namespace std;
// vector<vector<int>> direction{{1, 1}, {0, 1}, {1, 0}, {-1, 0}, {0, -1}, {-1, -1}, {1, -1}, {-1, 1}};
// int shortestPathBinaryMatrix(vector<vector<int>> &grid)
// {

//     int m = grid.size();
//     int n = grid[0].size();

//     if (m == 0 || n == 0 || grid[0][0] != 0)
//         return -1;

//     // ! pushing the initial valoe{0,0}

//     auto isSafe = [&](int x, int y)
//     {
//         return x >= 0 && x < m && y >= 0 && y < n;
//     };

//     queue<pair<int, int>>
//         que;
//     que.push({0, 0});
//     grid[0][0] = 1;

//     int count = 0;

//     while (!que.empty())
//     {
//         int N = que.size();
//         while (N--)
//         {
//             auto curr = que.front();
//             que.pop();
//             int x = curr.first;
//             int y = curr.second;

//             // ! when we reach the last node (n -1, m-1)

//             if (x == m - 1 && y == n - 1)
//                 return count + 1;

//             for (auto dir : direction)
//             {
//                 int _x = x + dir[0];
//                 int _y = y + dir[1];

//                 if (isSafe(_x, _y) && grid[_x][_y] == 0)
//                 {
//                     que.push({_x, _y});
//                     grid[_x][_y] = 1;
//                 }
//             }
//         }
//         count++;
//     }
//     return -1;
// }

// ! using the Dijkstra Algorithm

vector<vector<int>> direction{{1, 1}, {0, 1}, {1, 0}, {-1, 0}, {0, -1}, {-1, -1}, {1, -1}, {-1, 1}};

int shortestPathBinaryMatrix(vector<vector<int>> &grid)
{

    int m = grid.size();
    int n = grid[0].size();

    if (m == 0 || n == 0 || grid[0][0] != 0)
        return -1;

    // ! pushing the initial valoe{0,0}

    auto isSafe = [&](int x, int y)
    {
        return x >= 0 && x < m && y >= 0 && y < n;
    };

    vector<vector<int>> result(m, vector<int>(n, INT_MAX));
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;

    pq.push({0, {0, 0}});
    result[0][0] = 0;

    while (!pq.empty())
    {

        int d = pq.top().first;
        pair<int, int> node = pq.top().second;

        int x = node.first;
        int y = node.second;
        pq.pop();

        for (auto dir : direction)
        {

            int x_ = x + dir[0];
            int y_ = y + dir[1];

            int dist = 1;

            if (isSafe(x_, y_) && grid[x_][y_] == 0 && d + dist < result[x_][y_])
            {

                pq.push({d + dist, {x_, y_}});
                result[x_][y_] = d + dist;
            }
        }

        if (result[m - 1][n - 1] == INT_MAX)
            return -1;

        result[m - 1][n - 1] + 1;
    }
}