#include <bits/stdc++.h>
using namespace std;

// * House Robber 1 (Recursion)
// & Complexity: O(2^n)
int rob_rec(vector<int> &nums, int i)
{
    if (i < 0)
        return 0;
    return max(rob_rec(nums, i - 1), nums[i] + rob_rec(nums, i - 2));
}

// * House Robber 1 (Recursion + Memoization)
// & Complexity: O(n), Space Complexity: O(n)
int rob_memo(vector<int> &nums, int i, vector<int> &dp)
{
    if (i < 0)
        return 0;
    if (dp[i] != -1)
        return dp[i];
    return dp[i] = max(rob_memo(nums, i - 1, dp), nums[i] + rob_memo(nums, i - 2, dp));
}

// * House Robber 1 (Bottom-Up DP - Tabulation)
// & Complexity: O(n), Space Complexity: O(n)
int rob_bottom_up(vector<int> &nums)
{
    int n = nums.size();
    if (n == 0) return 0;
    if (n == 1) return nums[0];

    vector<int> dp(n);
    dp[0] = nums[0];
    dp[1] = max(nums[0], nums[1]);

    for (int i = 2; i < n; i++)
    {
        dp[i] = max(dp[i - 1], nums[i] + dp[i - 2]);
    }
    return dp[n - 1];
}

// * House Robber 1 (Space-Optimized DP)
// & Complexity: O(n), Space Complexity: O(1)
int rob_optimized(vector<int> &nums)
{
    int prev2 = 0, prev1 = 0;
    for (int num : nums)
    {
        int temp = max(prev1, prev2 + num);
        prev2 = prev1;
        prev1 = temp;
    }
    return prev1;
}

// * House Robber 2 (Circular Houses, Space-Optimized DP)
// & Complexity: O(n), Space Complexity: O(1)
int rob_circular(vector<int> &nums)
{
    if (nums.size() == 1) return nums[0];
    vector<int> nums1(nums.begin(), nums.end() - 1);
    vector<int> nums2(nums.begin() + 1, nums.end());
    return max(rob_optimized(nums1), rob_optimized(nums2));
}

int main()
{
    vector<int> houses = {2, 7, 9, 3, 1};
    vector<int> dp(houses.size(), -1);

    int res_rec = rob_rec(houses, houses.size() - 1);    // Recursion
    int res_memo = rob_memo(houses, houses.size() - 1, dp); // Memoization
    int res_bottom = rob_bottom_up(houses);             // Bottom-Up DP
    int res_optimized = rob_optimized(houses);         // Space-Optimized DP
    int res_circular = rob_circular(houses);           // House Robber 2

    cout << "House Robber 1 using Recursion: " << res_rec << endl;
    cout << "House Robber 1 using Memoization: " << res_memo << endl;
    cout << "House Robber 1 using Bottom-Up DP: " << res_bottom << endl;
    cout << "House Robber 1 using Space-Optimized DP: " << res_optimized << endl;
    cout << "House Robber 2 (Circular) using Space-Optimized DP: " << res_circular << endl;

    return 0;
}
