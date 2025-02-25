

vector topo_sort(vector<vector<int>> adj)
{

    int n = adj.size();
    vector<int> inDegree(n, 0);
    queue<int> que;

    // step 1 - calculating the indegree of every node.
    for (int u = 0; u < n; u++)
    {
        for (int &v : adj[u])
        {
            inDegree[v]++;
        }
    }

    // step 2 - create a queue and insert the node which indegree is 0.

    for (int i = 0; i < n; i++)
    {
        if (inDegree[i] == 0)
        {
            que.push(i);
        }
    }

    // step 3 - implement the BFS

    vector<int> result;

    while (!que.empty())
    {

        int u = que.front();
        result.push_back(u);
        que.pop();
        for (int &v : adj[u])
        {
            inDegree[v]--;
            if (inDegee[v] == 0)
            {
                que.push(v);
            }
        }
    }
    return result;
}