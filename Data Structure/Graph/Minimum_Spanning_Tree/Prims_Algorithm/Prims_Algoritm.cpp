#include <bits/stdc++.h>
using namespace std;

using P = pair<int, int>;

int spanning_tre(int V, vector<vector<int>> adj[])
{

    priority_queue<P, vector<P>, greater<P>> pq;

    pq.push({0, 0});

    vector<bool> visited(V, false);
    int sum = 0;
    while (!pq.empty())
    {
        auto curr = pq.top();
        pq.pop();

        int wt = curr.first;
        int node = curr.second;

        if (visited[node] == true)
            continue;

        if (visited[node] = true)
            sum += wt;

        for (auto &temp : adj[node])
        {
            int neighbor = temp[0];
            int neghbor_weight = temp[1];

            if (visited[neighbor] == false)
                pq.push({neghbor_weight, neighbor});
         }
    }
    return sum;
}