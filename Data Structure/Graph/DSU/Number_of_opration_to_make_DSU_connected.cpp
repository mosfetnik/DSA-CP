

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

int makeConnected(int n, vector<vector<int>> &connections)
{
    parent.resize(n);
    rank.resize(n, 0);

    if (connections.size() < n - 1)
        return -1;

    for (int i = 0; i < n; i++)
        parent[i] = i;

    int component = n;
    for (auto &vec : connections)
    {
        if (find(vec[0]) != find(vec[1]))
        {
            Union(vec[0], vec[1]);
            component--;
        }
    }

    return component - 1;
}
