class Solution {
    public:
        void dfs(unordered_map<int, vector<int>>& adj, vector<bool>& visited, int u,
                 long long& size) {
    
            visited[u] = true;
            size++;
            for (auto& v : adj[u]) {
    
                if (!visited[v]) {
                    dfs(adj, visited, v, size);
                }
            }
        }
    
        long long countPairs(int n, vector<vector<int>>& edges) {
    
            unordered_map<int, vector<int>> adj;
            vector<bool> visited(n, false);
    
            for (auto& vec : edges) {
    
                int u = vec[0];
                int v = vec[1];
    
                adj[u].push_back(v);
                adj[v].push_back(u);
            }
    
            long long remaining_node = n;
            long long result=0;
    
            for (int i = 0; i < n; i++) {
    
                if (!visited[i]) {
                    long long size = 0;
    
                    dfs(adj, visited, i, size);
                    result += (size) * (remaining_node - size);
    
                    remaining_node -= size;
                }
            }
            return result;
        }
    };