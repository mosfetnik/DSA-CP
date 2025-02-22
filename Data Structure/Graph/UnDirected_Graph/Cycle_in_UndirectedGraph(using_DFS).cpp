

bool isCylceDFS(vector<int> adj[], int u, vector<bool> &visited, int parent)
{
    visited[u] = true;
    for (int &v : adj[u])
    {
        if (v == parent)
            continue;

        if (visited[v])
            return true;

        if (isCylceDFS(adj, v, visitd, u))
            return true;
    }
    return false;
}

bool isCycle(int V, vector<int> adj[])
{
    vector<bool> visited(V, false);
    //* step 1 -- visiting all vectexes in the graph
    //* if there is any unconnected vectex so that will missed if we did not run this loop

    for (int i = 0; i < V; i++)
    {
        if (!visited[i] && isCycleDFS(adj, i, visited, -1))
        {
            return true;
        }
    }
    return false;
}