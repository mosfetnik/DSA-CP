void dfs(vector<vector<int>>& isConnected, vector<bool>& visited, int u) {

    visited[u] = true;
    for (int v = 0; v < isConnected.size(); v++) {

        if (!visited[v] && isConnected[u][v] == 1) {
            dfs(isConnected, visited, v);
        }
    }
};

int findCircleNum(vector<vector<int>>& isConnected) {
    int n = isConnected.size();
    int count = 0;
    vector<bool> visited(n, false);

    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            dfs(isConnected, visited, i);
            count++;
        }
    }
    return count;
}