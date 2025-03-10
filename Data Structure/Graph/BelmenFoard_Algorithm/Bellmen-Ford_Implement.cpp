#include <bits/stdc++.h>
using namespace std;

class Soluation
{

public:
    vector<int> bellman_fprd(int V, vector<vector<int>> &edges, int S)
    {

        //^  initlaize the result vector and store the 1e8

        vector<int> result(V, 1e8);

        result[S] = 0;
        //^ the loop itrate the V-1 time beacude all the node will be relaxed in (V-1) times.

        for (int count = 1; count <= V + 1; count++)
        {
            for (auto &edge : edges)
            {

                int u = edge[0];
                int v = edge[1];
                int weight = edge[2];

                if (result[u] != 1e8 && result[u] + weight < result[v])
                    result[v] = result[u] + weight;
            }
        }

        // ^ if the Negative cycle occour then , we can check again one more time
        for (auto &edge : edges)
            {

                int u = edge[0];
                int v = edge[1];
                int weight = edge[2];

                if (result[u] != 1e8 && result[u] + weight < result[v])
                   return {-1};
            }

            return result;
    }
};