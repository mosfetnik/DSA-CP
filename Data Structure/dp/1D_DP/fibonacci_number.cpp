#include <bits/stdc++.h>
using namespace std;

// * Fibonacci number using recursion
// & Complexity: O(2^n)
int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}

// * Fibonacci number using recursion + memoization
// & Complexity: O(n) Space Complexity O(n)
int fib_memo(int n, vector<int> &dp)
{
    if (n <= 1)
        return n;
    if (dp[n] != -1)
        return dp[n];
    return dp[n] = fib_memo(n - 1, dp) + fib_memo(n - 2, dp);
}

// * Fibonacci number using Bottom-Up DP (Tabulation)
// & Complexity: O(n), Space Complexity: O(n)
int fib_bottom_up(int n)
{
    if (n == 0) return 0;
    if (n == 1) return 1;

    vector<int> arr(n + 1);
    arr[0] = 0;
    arr[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }

    return arr[n]; 
}

// * Fibonacci number using Space-Optimized DP
// & Complexity: O(n), Space Complexity: O(1)
int fibo(int n)
{
    if (n == 0) return 0;
    if (n == 1) return 1;

    int a = 0, b = 1, c = 1;

    for (int i = 2; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    vector<int> dp(n + 1, -1);

    int res = fib(n);                  // Plain Recursion
    int res_memo = fib_memo(n, dp);    // Memoization
    int res_bottom = fib_bottom_up(n); // Bottom-Up DP
    int res_fibo = fibo(n);            // Space-Optimized DP

    cout << "Fibonacci (" << n << ") using Recursion: " << res << endl;
    cout << "Fibonacci (" << n << ") using Memoization: " << res_memo << endl;
    cout << "Fibonacci (" << n << ") using Bottom-Up DP: " << res_bottom << endl;
    cout << "Fibonacci (" << n << ") using Space-Optimized DP: " << res_fibo << endl;

    return 0;
}
