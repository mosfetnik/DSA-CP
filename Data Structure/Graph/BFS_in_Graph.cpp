#include <bits/stdc++.h>
using namespace std;

void BFS(vector<vector<int>> &adj, int V, int start)
{

    vector<bool> visited(V, false);

    queue<int> que;
    visited[start] = true;
    que.push(start);

    cout << "BFS :";

    while (!que.empty())
    {
        int v = que.front();
        que.pop();
        cout << v << " ";

        for (int u : adj[v])
        {
            if (!visited[u])
            {
                visited[u] = true;
                que.push(u);
            }
        }
    }
    cout << endl;
}
int main()
{

    int V = 5;
    vector<vector<int>> adj(V);
    adj[0] = {1, 2};
    adj[1] = {0, 3, 4};
    adj[2] = {0, 4};
    adj[3] = {1};
    adj[4] = {1, 2};

    BFS(adj, V, 0);

    return 0;
}