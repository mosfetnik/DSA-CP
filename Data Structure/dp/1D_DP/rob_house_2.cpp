#include <bits/stdc++.h>
using namespace std;

int solve(int i, int end, vector<int> &nums, vector<int> &dp)
{
    if (i > end)
        return 0; // Base case: Out of range
    if (dp[i] != -1)
        return dp[i]; // Return memoized result

    int steal = nums[i] + solve(i + 2, end, nums, dp); // Rob current house
    int skip = solve(i + 1, end, nums, dp);            // Skip current house

    return dp[i] = max(steal, skip); // Store result in dp
}





int main()
{
    int n = nums.size();
    if (n == 1)
        return nums[0]; // Edge case: Only one house

    vector<int> dp1(n, -1), dp2(n, -1);

    // Case 1: Exclude last house (Rob from index 0 to n-2)
    int case1 = solve(0, n - 2, nums, dp1);

    // Case 2: Exclude first house (Rob from index 1 to n-1)
    int case2 = solve(1, n - 1, nums, dp2);

    return max(case1, case2); // Take the maximum of both cases
}
