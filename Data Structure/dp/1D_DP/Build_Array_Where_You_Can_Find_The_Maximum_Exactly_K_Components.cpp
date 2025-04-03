//  * using recursion
int N, M, K;
int mod = 1e9 + 7;
int solve(int idx, int cost, int max_val)
{

    if (idx == N)
    {
        if (cost == K)
            return 1;
        return 0;
    }

    int count = 0;
    for (int i = 1; i <= M; i++)
    {
        if (i > max_val)
            count = (count + solve(idx + 1, cost + 1, i)) % mod;
        else
            count = (count + solve(idx + 1, cost, max_val)) % mod;
    }
    return count % mod;
}
int numOfArrays(int n, int m, int k)
{
    N = n;
    M = m;
    K = k;
    return solve(0, 0, 0);
}

// * using the recursion + memoization

int N, M, K;
int mod = 1e9 + 7;
int dp[51][51][101];
int solve(int idx, int cost, int max_val)
{

    if (idx == N)
    {
        if (cost == K)
        {
            return 1;
        }

        return 0;
    }
    if (dp[idx][cost][max_val] != -1)
    {
        return dp[idx][cost][max_val];
    }

    int count = 0;
    for (int i = 1; i <= M; i++)
    {
        if (i > max_val)
            count = (count + solve(idx + 1, cost + 1, i)) % mod;
        else
            count = (count + solve(idx + 1, cost, max_val)) % mod;
    }
    return dp[idx][cost][max_val] = count;
}
int numOfArrays(int n, int m, int k)
{
    N = n;
    M = m;
    K = k;
    memset(dp, -1, sizeof(dp));
    return solve(0, 0, 0);
}