#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> validArrangement(vector<vector<int>> &pairs)
{

    unordered_map<int, vector<int>> adj;
    unordered_map<int, int> inDegree, outDegree;

    // key ==> node
    // value ==> indegree / outdegree

    for (auto &edge : pairs)
    {

        int u = edge[0];
        int v = edge[1];

        adj[u].push_back(v);
        outDegree[u]++;
        inDegree[v]++;
    }
    int startNode = pairs[0][0];
    for (auto &it : adj)
    {
        int node = it.first;
        if (outDegree[node] - inDegree[node] == 1)
        {
            startNode = node;
            break;
        }
    }

    vector<int> EulaerPath;
    stack<int> st;

    st.push(startNode);
    while (!st.empty())
    {
        int curr = st.top();
        if (!adj[curr].empty())
        {
            int ngbr = adj[curr].back();
            adj[curr].pop_back();
            st.push(ngbr);
        }
        else
        {
            EulaerPath.push_back(curr);
            st.pop();
        }
    }

    reverse(EulaerPath.begin(), EulaerPath.end());

    vector<vector<int>> result;
    for (int i = 0; i < EulaerPath.size() - 1; i++)
    {
        result.push_back({EulaerPath[i], EulaerPath[i + 1]});
    }
    
}