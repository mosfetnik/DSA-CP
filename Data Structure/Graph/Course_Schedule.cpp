class Solution {
    public:
        bool topo_logical_sort(unordered_map<int, vector<int>>& adj, int n,
                               vector<int>& inDegree) {
    
            queue<int> que;
            int count = 0;
            for (int i = 0; i < n; i++) {
                if (inDegree[i] == 0) {
                    count++;
                    que.push(i);
                }
            }
    
            while (!que.empty()) {
                int u = que.front();
                que.pop();
    
                for (int& v : adj[u]) {
                    inDegree[v]--;
    
                    if (inDegree[v] == 0) {
                        count++;
                        que.push(v);
                    }
                }
            }
            if (count == n){
                return true;
            }
            else{
                return false;
            }
        }
    
        bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
    
            unordered_map < int,vector< int >> adj;
            vector<int> inDegree(numCourses, 0);
    
            for (auto& vec : prerequisites) {
                int a = vec[0];
                int b = vec[1];
    
                // b --->a
                adj[b].push_back(a);
    
                inDegree[a]++;
    
            }
                return topo_logical_sort(adj, numCourses, inDegree);
        }
    };