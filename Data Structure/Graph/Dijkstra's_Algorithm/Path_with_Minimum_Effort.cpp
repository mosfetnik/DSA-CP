#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    using P = pair<int, pair<int, int>>; // Using alias for readability
    vector<vector<int>> direction = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

    int minimumEffortPath(vector<vector<int>>& height) {
        int m = height.size();
        int n = height[0].size();

        vector<vector<int>> result(m, vector<int>(n, INT_MAX));
        priority_queue<P, vector<P>, greater<P>> pq;

        auto isSafe = [&](int x, int y) {
            return (x >= 0 && x < m && y >= 0 && y < n);
        };

        result[0][0] = 0;
        pq.push({0, {0, 0}});

        while (!pq.empty()) { // Fixed the loop condition
            int diff = pq.top().first;
            auto [x, y] = pq.top().second;
            pq.pop();

            for (auto& dir : direction) {
                int x_ = x + dir[0];
                int y_ = y + dir[1];

                if (isSafe(x_, y_)) {
                    int absdiff = abs(height[x][y] - height[x_][y_]);
                    int maxdiff = max(diff, absdiff);

                    if (result[x_][y_] > maxdiff) {
                        result[x_][y_] = maxdiff;
                        pq.push({maxdiff, {x_, y_}});
                    }
                }
            }
        }

        return result[m - 1][n - 1];
    }
};
