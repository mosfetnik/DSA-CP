
#include <bits/stdc++.h>
using namespace std;

vector<int> shortestPath(int n, int k, vector<vector<int>> &time)
{

    // *make the adj list use unordered_map

    unordered_map<int, vector<pair<int, int>>> adj;

    for (auto &vec : time)
    {
        int u = vec[0];
        int v = vec[1];
        int cost = vec[2];

        adj[u].push_back({v, cost});
    }

    // *now creating the priority queue

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    // *initialize the result array
    vector<int> result(n, INT_MAX);

    result[k] = 0;
    // push the initial value
    pq.push({0, k});

    while (!pq.empty())
    {
        int dis = pq.top().first;
        int node = pq.top().second;
        // *pop the initial value
        pq.pop();

        for (auto &vec : adj[node])
        {
            int adjNode = vec.first;
            int weight = vec.second;

            if (dis + weight < result[adjNode])
            {

                result[adjNode] = dis + weight;
                pq.push({dis + weight, adjNode});
            }
        }
    }

    int ans = INT_MIN;

    for (int i = 1; i <= n; i++)
        ans = max(ans, result[i]);

    if (ans == INT_MAX)
        return {-1};
    else
        return {ans};
}