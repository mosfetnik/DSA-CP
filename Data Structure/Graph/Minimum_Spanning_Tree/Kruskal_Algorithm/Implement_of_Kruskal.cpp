#include <bits/stdc++.h>
using namespace std;

class Soluation
{

public:
    vector<int> rank;
    vector<int> parent;

    int find(int x)
    {

        if (x == parent[x])
            return x;

        return parent[x] = find(parent[x]); // recursivelly call the find function to calculate the parent.
    }
    void Union(int x, int y)
    {
        // union karne kare ke liye unke parent ko same karna padega

        int X_parent = find(x); // dono ke parent ko find karo pahle jinka union karana ha
        int Y_parent = find(y);

        if (X_parent == Y_parent)
            return;

        // ager rank badi ha x ke parent ke y ke parent se "to x ke parent ko y ka parent bana do"
        if (rank[X_parent] > rank[Y_parent])
            parent[Y_parent] = X_parent;

        // ager rank badi ha y ka parent ke to x ke parent se "to y ke parent ko x ka paent bana do"
        else if (rank[Y_parent] > rank[X_parent])
            parent[X_parent] = Y_parent;

        else
        {
            parent[X_parent] = Y_parent;
            rank[Y_parent]++;
        }
    }

    int Kruskal(vector<vector<int>> &vec)
    {

        int sum = 0;
        for (auto &temp : vec)
        {
            int u = temp[0];
            int v = temp[1];
            int weight = temp[2];

            int parent_u = find(u);
            int parent_v = find(v);

            if (parent_u != parent_v)
            {
                Union(u, v);
                sum += weight;
            }

            return sum;
        }
    }
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        parent.resize(V);
        rank.resize(V,0);

        for(int i=0;i<V;i++){
            parent[i] =i;
        }
        vector<vector<int>> vec;

        for (int u = 0; u < V; u++)
        {
            for (auto &temp : adj[u])
            {
                int v = temp[0];
                int weight = temp[1];

                vec.push_back({u, v, weight});
            }
        }

        auto comparator = [&](vector<int> &vec1, vector<int> &vec2)
        {
            return vec1[2] < vec2[2];
        };

        sort(vec.begin(), vec.end(), comparator);

        return Kruskal(vec);
    }
};