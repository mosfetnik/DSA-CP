#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

vector<int> parent;
vector<int> rank;

int find(int x)
{
    if (x == parent[x])
        return x;
    return parent[x] = find(parent[x]);
}

void Union(int x, int y)
{
    int X_parent = find(x); // Find the parent of x
    int Y_parent = find(y); // Find the parent of y

    if (X_parent == Y_parent)
        return; // Already in the same set

    if (rank[X_parent] > rank[Y_parent])
        parent[Y_parent] = X_parent; // Union by rank

    else if (rank[Y_parent] > rank[X_parent])
        parent[X_parent] = Y_parent; // Union by rank

    else
    {
        parent[X_parent] = Y_parent;
        rank[Y_parent]++;
    }
}

int Kruskal(vector<vector<int>> &vec)
{
    int sum = 0;
    for (auto &temp : vec)
    {
        int u = temp[0];
        int v = temp[1];
        int weight = temp[2];

        int parent_u = find(u);
        int parent_v = find(v);

        if (parent_u != parent_v)
        {
            Union(u, v);
            sum += weight;
        }
    }
    return sum;
}

int minCostConnectPoints(vector<vector<int>> &points)
{
    int V = points.size();
    parent.resize(V);
    rank.resize(V, 0);

    for (int i = 0; i < V; i++)
    {
        parent[i] = i;
    }

    vector<vector<int>> vec;

    for (int i = 0; i < V; i++)
    {
        for (int j = i + 1; j < V; j++)
        {
            int x1 = points[i][0], y1 = points[i][1];
            int x2 = points[j][0], y2 = points[j][1];

            int dis = abs(x1 - x2) + abs(y1 - y2); // Manhattan distance
            vec.push_back({i, j, dis});
        }
    }

    auto comparator = [](vector<int> v1, vector<int> v2)
    {
        return v1[2] < v2[2];
    };

    sort(vec.begin(), vec.end(), comparator); // Sort the edges based on distance

    return Kruskal(vec); // Apply Kruskal's algorithm
}
