

void isCycleDFS(vector<vector<int>> adj, vector<bool> &visitd, int u, vector<bool> isRecursion)
{

    visited[u] = true;
    isRecursion = true;

    for (int &v : adj[u])
    {
        if( visited[v] == false && isCycleDFS(adj, visited, i, isRecursion)){
            return true;

        }
        else if( isRecursion[v]  == true){
            return true;
        }
    }

    isRecursion  == false;
    return false;
}
bool isCycle(vector<vector<int>> adj)
{

    int V = adj.length();
    vector<bool> visited(V, false);
    vector<bool>isRecursion<V, false);

    for (int i = 0; i < n; i++)
    {
        if (!visited && isCycleDFS(adj, visited, i, isRecursion))
        {
            return true;
        }
    }
    return false;
}