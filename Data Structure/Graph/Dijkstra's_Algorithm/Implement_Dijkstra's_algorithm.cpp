#include <bits/stdc++.h>
using namespace std;

vector<int> dijkstra(int V, vector<vector<int>> adj[], int src)
{
    // Min-Heap priority queue for Dijkstra (cost, node)
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    // Result array initialized with INT_MAX (infinity)
    vector<int> result(V, INT_MAX);

    // Distance to the src is 0
    result[src] = 0;
    pq.push({0, src});

    while (!pq.empty())
    {
        int dis = pq.top().first;
        int node = pq.top().second;
        pq.pop();

        // Traverse all adjacent nodes
        for (auto &v : adj[node])
        {
            int adjNode = v[0];
            int weight = v[1];

            // Relaxation step: Update distance if a shorter path is found
            if (dis + weight < result[adjNode])
            {
                result[adjNode] = dis + weight;
                pq.push({result[adjNode], adjNode});
            }
        }
    }
    return result;
}
