#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &nums, int idx, bool flag)
{
    int n = nums.size();
    ;

    if (idx >= n)
        return 0;

    int skip = solve(nums, idx + 1, flag);
    int val = nums[idx];

    if (flag == false)
    {

        val = -val;
    }

    int take = solve(nums, idx + 1, !flag) + val;
    return max(take, skip);
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int idx = 0;

    bool flag = true;

    int result = solve(nums, idx, flag);
    cout << result;

    return 0;
}

// * using recursion and Memoization.
using namespace std;

int solve(vector<int> &nums, int idx, bool flag, vector<vector<int>> &dp)
{
    int n = nums.size();
    if (idx >= n)
        return 0;

    if (dp[idx][flag] != -1)
        return dp[idx][flag];

    int skip = solve(nums, idx + 1, flag, dp);
    int val = nums[idx];

    if (!flag)
        val = -val;

    int take = solve(nums, idx + 1, !flag, dp) + val;
    return dp[idx][flag] = max(take, skip);
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    vector<vector<int>> dp(n, vector<int>(2, -1));
    cout << solve(nums, 0, true, dp);

    return 0;
}
// * Bottom up approach


long long maxAlternativeSum(vector<int>&nums){

    int n = nums.size();


    vector<vector<long>>t(n+1,vector<long>(2,0));


    for( int i= 1;i<n+1;++i){
        t[i][0] = max(t[i-1][1] -nums[i-1],t[i-1][0]);
        t[i][1] = max(t[i-1][0] +nums[i-1],t[i-1][1]);
    }
    return max( t[n][0],t[n][1]);
}