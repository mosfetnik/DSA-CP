#include <bits/stdc++.h>
using namespace std;

// ! maximum subarray sum

// * O(n^2) brute force

void brute_force(vector<int> arr)
{
    int n = arr.size();
    int sum = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        int curr = 0;
        for (int j = i; j < n; j++)
        {
            curr += arr[i];
            sum = max(curr, sum);
        }
    }
    cout << sum << endl;
}

// * O(n) Kadane's Algorithm
void kadanes(vector<int> arr)
{
    int n = arr.size();
    int curr = arr[0];
    int sum = arr[0];

    for (int i = 1; i < n; i++)
    {
        curr = max(arr[i], arr[i] + curr);
        sum = max(curr, sum);
    }
    cout << sum << endl;
}
