#include <bits/stdc++.h>
using namespace std;

void DFS(vector<vector<int>> &adj, vector<bool> &visited, int v) {
    cout << v << " ";
    visited[v] = true;

    for (int u : adj[v]) {
        if (!visited[u]) {
            DFS(adj, visited, u);
        }
    }
}

int main() {
    int V = 5;
    vector<vector<int>> adj(V);

    adj[0] = {1, 2};
    adj[1] = {0, 3, 4};
    adj[2] = {0, 4};
    adj[3] = {1};
    adj[4] = {1, 2};

    vector<bool> visited(V, false);
    
    cout << "DFS Traversal: ";
    DFS(adj, visited, 0);  // Start DFS from node 1
    cout << endl;

    return 0;
}
