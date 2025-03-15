#include <bits/stdc++.h>
using namespace std;

void dfsFill(int u, vector<vector<int>> &adj, vector<bool> &visited, stack<int> st)
{
    visited[u] = true;
    for (auto &v : adj[u])
    {
        if (!visited[v])
            dfsFill(v, adj, visited, st);
    }
    st.push(u);
}

void dfsTraversal(int u, vector<vector<int>> &revadj, vector<bool> &visited)
{

    visited[u] = true;

    for (int &v : revadj[u])
    {

        if (!visited[v])
        {

            dfsTraversal(v, revadj, visited);
        }
    }
}

int kosaraju(int V, vector<vector<int>> &adj)
{
    // ^ step 1 : store order in the stack
    // topo sort
    stack<int> st;
    vector<bool> visited(V, false);

    for (int i = 0; i < V; i++)
    {
        if (!visited[i])
            dfsFill(i, adj, visited, st);
    }

    // ^ step 2 : make a reverse graph

    vector<vector<int>> revadj(V);

    for (int u = 0; u < V; u++)
    {
        /// v---->u// storing in the reverse order
        for (int &v : adj[u])
            revadj[v].push_back(u);
    }
    int countScc = 0;
    visited = vector<bool>(V, false);

    while (!st.empty())
    {

        int node = st.top();
        st.pop();

        if (!visited[node])
        {

            dfsTraversal(node, revadj, visited);

            countScc++;
        }
    }

    return countScc;
}