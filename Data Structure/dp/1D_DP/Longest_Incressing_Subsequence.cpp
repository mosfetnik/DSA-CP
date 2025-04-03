#include <bits/stdc++.h>
using namespace std;

int main()
{
    // * using brute force two loops
    vector<int> arr = {10, 9, 2, 5, 3, 7, 101, 18};

    int n = arr.size();
    int max_lengh = 1;

    vector<int> dp(n, 1);

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[i] > arr[j])
            {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
        max_lengh = max(max_lengh, dp[i]);
    }
    cout << max_lengh;




    // * using recursion

      
