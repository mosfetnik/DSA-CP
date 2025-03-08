#include <bits/stdc++.h>
using namespace std;

vector<int> shortestPath(int n, int m, vector<vector<int>> &edge)
{
    unordered_map<int, vector<pair<int, int>>> adj;
    // storing the data in int and vector of pair
    for (auto &vec : edge)
    {
        int u = vec[0];
        int v = vec[1];
        int cost = vec[2];

        adj[u].push_back({v, cost});
        adj[v].push_back({u, cost});
    }

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    vector<int> result(n + 1, INT_MAX);
    vector<int> parent(n + 1);

    for (int i = 1; i <= n; i++)
        parent[i] = i;

    result[1] = 0;
    pq.push({0, 1});

    while (!pq.empty())
    {
        int d = pq.top().first;
        int node = pq.top().second;
        pq.pop();

        for (auto &it : adj[node])
        {
            int adjNode = it.first;
            int dist = it.second;

            if (d + dist < result[adjNode])
            {
                result[adjNode] = d + dist;
                pq.push({d + dist, adjNode});
                parent[adjNode] = node;
            }
        }
    }

    vector<int> path;
    int destNode = n;
    if (result[destNode] == INT_MAX)
        return {-1};

    while (parent[destNode] != destNode)
    {
        path.push_back(destNode);
        destNode = parent[destNode];
    }
    path.push_back(1);

    reverse(path.begin(), path.end());
    return path;
}