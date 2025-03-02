

bool check_Bipartite_BFS(vector<vector<int>> adj, int curr, vector<int> &color, int curr_color)
{

    queue<int> que;
    que.push(curr);
    color[curr] = curr_color;

    while (!que.empty())
    {

        int u = que.front();

        que.pop();

        for (int &v : adj[u])
        {
            if (color[v] == color[u])
                return false;

            if (color[v] == -1)
            {
                color[v] = 1 - color[u];
                que.push(v);
            }
        }
    }

    return true;
}

bool iSBipartite(vector<vector<int>> adj, int V)
{
    vector<int> color(V, -1);
    // red =1;
    // green =0;

    for (int i = 0; i < V; i++)
    {
        if (color[i] == -1)
        {
            if (check_Bipartite_BFS(adj, i, color, 1) == false)
                return false;
        }
    }
    return true;
}