#include <vector>
using namespace std;

bool check_Bipartite_DFS(vector<vector<int>> &adj, vector<int> &color, int u, int curr_color) {
    color[u] = curr_color; // color the current node

    for (int v : adj[u]) {
        if (color[v] == color[u]) // If adjacent node has same color, return false
            return false;
        if (color[v] == -1) { // If the adjacent node hasn't been colored
            int colorOfV = 1 - curr_color; // Alternate the color
            if (!check_Bipartite_DFS(adj, color, v, colorOfV)) // Recur for unvisited adjacent nodes
                return false;
        }
    }
    return true;
}

bool iSBipartite(vector<vector<int>> adj, int V) {
    vector<int> color(V, -1); // Initialize the color vector with -1 for all vertices

    for (int i = 0; i < V; i++) {
        if (color[i] == -1) { // If this vertex has not been visited
            if (!check_Bipartite_DFS(adj, color, i, 1)) // Start DFS from this vertex with color 1
                return false; // If any DFS fails, the graph is not bipartite
        }
    }
    return true; // If all DFS calls succeed, the graph is bipartite
}
