#include <bits/stdc++.h>
using namespace std;

void DFS(vector<int> adj[], int u, vector<bool> &visited)
{
    visited[u] = true;
    for (int &it : adj[u])
    {
        if (!visited[it])
        {
            DFS(adj, it, visited);
        }
    }
}
bool isConnected(int V, vector<int> adj[])
{
    vector<bool> visited(V, false);

    // Find a vertex with a non-zero degree
    int nonDegree = -1;
    for (int i = 0; i < V; i++)
    {
        if (!adj[i].empty())
        {
            nonDegree = i;
            break;
        }
    }

    // If there are no edges, the graph is trivially Eulerian
    if (nonDegree == -1)
        return true;

    // Start DFS from the first non-zero degree vertex
    DFS(adj, nonDegree, visited);

    // Check if all non-zero degree vertices were visited
    for (int i = 0; i < V; i++)
    {
        if (!visited[i] && !adj[i].empty())
        {
            return false;
        }
    }

    return true;
}

int isEulerCircuit(int V, vector<int> adj[])
{
    if (!isConnected(V, adj))
        return 0; // Not Eulerian

    int oddDegreeCount = 0;
    for (int i = 0; i < V; i++)
    {
        if (adj[i].size() % 2 != 0)
        {
            oddDegreeCount++;
        }
    }

    if (oddDegreeCount == 0)
        return 2; // Eulerian Circuit
    else if (oddDegreeCount == 2)
        return 1; // Eulerian Path
    else
        return 0; // Not Eulerian
}
