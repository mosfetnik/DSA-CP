bool hasCycle;

void DFS(vector<vector<int>> &adj, int u, vector<int> &visited, stack<int> &st, vector<int> &isRecursion)
{
    visited[u] = true;
    isRecursion[u] = true; // Mark the current node as part of the recursion stack

    // Explore neighbors (children)
    for (int v : adj[u])
    {
        // If the neighbor is part of the current recursion stack, a cycle is detected
        if (isRecursion[v] == true)
        {
            hasCycle = true;
            return; // If a cycle is found, stop further exploration
        }

        // If the neighbor hasn't been visited, explore it
        if (!visited[v])
            DFS(adj, v, visited, st, isRecursion); // Recursive DFS call
    }

    st.push(u); // After exploring all neighbors, push the node to stack (post-order)
    isRecursion[u] = false; // Unmark the node from the recursion stack
}

vector<int> finOrder(int numCourses, vector<vector<int>> &prerequisites)
{
    unordered_map<int, vector<int>> adj;
    vector<int> isRecursion(numCourses, false); // Keeps track of nodes in the recursion stack
    vector<int> visited(numCourses, false); // Keeps track of visited nodes
    hasCycle = false; // Initially assume there is no cycle

    stack<int> st;

    // Build the adjacency list from prerequisites
    for (auto &vec : prerequisites)
    {
        int a = vec[0];
        int b = vec[1];

        adj[b].push_back(a); // b->a
    }

    // Run DFS for all unvisited nodes
    for (int i = 0; i < numCourses; ++i)
    {
        if (!visited[i])
            DFS(adj, i, visited, st, isRecursion);
    }

    // If there's a cycle, return an empty list
    if (hasCycle == true)
        return {};

    // Prepare the result in topological order
    vector<int> result;
    while (!st.empty())
    {
        result.push_back(st.top());
        st.pop();
    }

    return result;
}
