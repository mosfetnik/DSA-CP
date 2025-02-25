

// ^ insert the child (v) than his parent (u)

void dfs(vevtor<vector<int>> adj, vector<bool> &visited, stack<int> st, int u)
{

    visited[u] = true;

    // pahle mere baccho ko dalo -->v
    for (int &v : adj[u])
    {
        if (!visited[v])
        {
            dfs(adj, visited, st, v);
        }
    }

    // abb mujhe dalo stack ma -->u
    st.push(u);
}

vector topo_sort(vevtor<vector<int>> adj)
{

    int V = adj.size();
    vector<bool> visited(V, false);

    stack<int> st;

    for (int i = 0; i < n; i++)
    {

        if (!visited[i])
        {
            return dfs(adj, visited, st, i);
        }
    }
 

    // Push back element form stack --> vector
    vector<int>result;
    while(!st.empty()){
        result.push_back(st.top());
        st.pop();
    }

    return result;
}