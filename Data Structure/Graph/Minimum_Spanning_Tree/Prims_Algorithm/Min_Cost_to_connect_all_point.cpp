// #include <bits/stdc++.h>
// using namespace std;
// using P = pair<int, int>;

// int prims_algo(vector<vector<P>> adj, int V)
// {

//     priority_queue<P, vector<P>, greater<P>> pq;

//     pq.push({0, 0});

//     vector<bool> visited(V, false);
//     int sum = 0;
//     while (!pq.empty())
//     {
//         auto curr = pq.top();
//         pq.pop();

//         int wt = curr.first;
//         int node = curr.second;

//         if (visited[node] == true)
//             continue;

//         if (visited[node] == true)
//             sum += wt;

//         for (auto &temp : adj[node])
//         {
//             int neighbor = temp.first;
//             int neghbor_weight = temp.second;

//             if (visited[neighbor] == false)
//                 pq.push({neghbor_weight, neighbor});
//         }
//     }
//     return sum;
// }
// int minCostConnectPoints(vector<vector<int>> &points)
// {

//     int V = points.size();
//     vector<vector<P>> adj(V);

//     for (int i = 0; i < V; i++)
//     {
//         for (int j = i + 1; j < V; j++)
//         {

//             int x1 = points[i][0];
//             int y1 = points[i][1];

//             int x2 = points[j][0];
//             int y2 = points[j][1];

//             int dis = abs(x1 - x2) + abs(y1 - y2);

//             adj[i].push_back({j, dis});
//             adj[j].push_back({i, dis});
//         }
//     }
//     return prims_algo(adj, V);
// }