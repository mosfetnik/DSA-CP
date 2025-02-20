

bool isCycleBFS(vector<vector<int>> adj, int u, vector<bool> &visited)
{

    queue<pair<int, int>> que;
    que.push({u, -1})
        visited[u] = true;

    while (!que.empty)
    {

        pair<int, int> P = que.front();
        que.pop();

        int source = p.first();
        int parent = p.second();

        for (int &v : adj[source])
        {
            if (visited[v] == false)
            {
                visited[v] == true;
                que.push({v, source});
            }
            else if (v == parent)
            {
                retrun true;
            }
        }
    }
}

bool isCylce(vector<vector<int>> adj)
{

    int V = adj.length();
    vector<bool> visited(V, false);
    for (int i = 0; i < n; i++)
    {

        if (!visited[i] && isCylceBFS(adj, i, visited))
        {
            return true;
        }
    }
    return false;
}